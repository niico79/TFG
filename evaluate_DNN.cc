#ifndef EVALUATE_DNN_DARK_HIGGS
#define EVALUATE_DNN_DARK_HIGGS

#include <vector>
#include <iostream>
#include <TMath.h>
#include <math.h>

#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TSystem.h"
#include "TROOT.h"

#include <boost/python.hpp>
#include <boost/python/numpy.hpp>

#include "ROOT/RVec.hxx"

#include <Python.h>

using namespace std;
using namespace ROOT;
using namespace ROOT::VecOps;

// Variables globales para cargar el modelo solo una vez
static PyObject* pModule = nullptr;
static PyObject* pFunction = nullptr;
static bool is_initialized = false;

float evaluate_dnn(
    float mpmet,
    float mtw2,
    float dphill,
    float dphillmet,
    float drll
)
{
    if (!is_initialized) {
        Py_Initialize();

        PyObject* sysPath = PySys_GetObject("path");
        PyList_Append(sysPath, PyUnicode_DecodeFSDefault("/afs/cern.ch/user/n/nbabioel/mkShapesRDF/HEP/Full2018_v7/"));

        pModule = PyImport_ImportModule("EvaluateDNN");
        if (!pModule) {
            PyErr_Print();
            std::cerr << "ERROR: No se pudo importar EvaluateDNN" << std::endl;
            return -99.9;
        }

        pFunction = PyObject_GetAttrString(pModule, "load_neural_network");
        if (!pFunction || !PyCallable_Check(pFunction)) {
            PyErr_Print();
            std::cerr << "ERROR: No se pudo cargar la función load_neural_network" << std::endl;
            return -99.9;
        }

        is_initialized = true;
    }

    std::vector<float> input = {mpmet, mtw2, dphill, dphillmet, drll};
    PyObject* pList = PyList_New(input.size());
    for (size_t i = 0; i < input.size(); ++i) {
        PyList_SetItem(pList, i, PyFloat_FromDouble(input[i]));
    }

    PyObject* pArgs = PyTuple_Pack(1, pList);
    if (!pArgs) {
        PyErr_Print();
        return -99.9;
    }

    PyObject* pValue = PyObject_CallObject(pFunction, pArgs);
    Py_DECREF(pArgs);

    if (!pValue) {
        PyErr_Print();
        return -99.9;
    }

    double result = -99.9;
    if (PyList_Check(pValue)) {
        PyObject* listItem = PyList_GetItem(pValue, 0);
        result = PyFloat_AsDouble(listItem);
    } else {
        PyErr_Print();
    }
    Py_DECREF(pValue);

    return (float)result;
}

#endif
