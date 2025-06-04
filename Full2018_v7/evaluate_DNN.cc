/*
Script que actúa como puente para la implementación de TMVA en mkShapes. Carga las variables de entrada, llama al intérprete de Python, realiza la
predicción y devuelve el valor de salida de la predicción.

Código adaptado de Jesús Vizán
*/

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

float evaluate_dnn(

    float mpmet,
    float mtw2,
    float dphill,
    float dphillmet,
    float drll


    // float lep_pt1,
    // float lep_pt2,
    // float lep_eta1,
    // float lep_eta2,
    // float mll,
    // float mth,
    // float mtw1,
    // float mtw2,
    // float ptll,
    // float drll,
    // float dphill,
    // float PuppiMET_pt,
    // float detall,
    // float mpmet,
    // float recoil,
    // float mR,
    // float mT2,
    // float mTe,
    // float mTi,
    // float upara,
    // float uperp,
    // float dphilmet,
    // float dphillmet,
    // float mcoll,
    // float mcollWW,
    // float dPhillStar,
    // float dPhill_Zp,
    // float Cos_theta,
    // float Theta_ll,
    // float dPhill_MET,
    // float first_btag_ID,
    // float second_btag_ID

//    float ms,
//    float mZp,
//    float mx
)
{
    Py_Initialize();

    double result = -1;

    // Import the module
    PyObject* sysPath = PySys_GetObject("path");
    //To change: input folder path
    //PyList_Append(sysPath, PyUnicode_DecodeFSDefault("/afs/cern.ch/user/v/victorr/private/DarkHiggs/Full2018_v7"));
    PyList_Append(sysPath, PyUnicode_DecodeFSDefault("/afs/cern.ch/user/n/nbabioel/mkShapesRDF/HEP/Full2018_v7/"));
    PyObject* pModule = PyImport_ImportModule("EvaluateDNN");

    if (pModule == NULL) {
        PyErr_Print();
        printf("ERROR importing module \n");
        exit(-1);
    }

    if (pModule != NULL) {
        // Retrieve the function
        PyObject* pFunction = PyObject_GetAttrString(pModule, "load_neural_network");
        if (pFunction == NULL) {
            printf("ERROR getting function");
            exit(-1);
        }
	if (pFunction != NULL) {
            // Prepare arguments
	    std::vector<float> input;

	    //To change: inputs
    input.push_back(mpmet);
    input.push_back(mtw2);
    input.push_back(dphill);
    input.push_back(dphillmet);
    input.push_back(drll);



            // Input
    	    //To change: number of inputs
            //PyObject* pList = PyList_New(32);
            //for (int i = 0; i < 32; ++i) {
            PyObject* pList = PyList_New(5);
            for (int i = 0; i < 5; ++i) {
                PyList_SetItem(pList, i, PyFloat_FromDouble((double)input[i]));
            }
            PyObject* pArgs = PyTuple_Pack(1, pList);
            if (pArgs != NULL) {
		    // Call the function
		    PyObject* pValue = PyObject_CallObject(pFunction, pArgs);
		    if (pValue != NULL) {
			    if (PyList_Check(pValue)) {
				    Py_ssize_t listSize = PyList_Size(pValue);
				    for (Py_ssize_t i = 0; i < listSize; i++) {
					    PyObject* listItem = PyList_GetItem(pValue, i);
					    result = PyFloat_AsDouble(listItem);
				    }
			    } else {
				    PyErr_Print();
			    }
		    } else {
			    PyErr_Print();
		    }

		    Py_DECREF(pArgs);
	    } else {
		    PyErr_Print();
	    }

	    Py_DECREF(pFunction);
	} else {
		PyErr_Print();
	}

	Py_DECREF(pModule);
    } else {
	    PyErr_Print();
    }

    // Depuración: imprimir todos los inputs recibidos
//std::cout << "[DNN] Inputs recibidos:\n";
//std::cout << "mpmet = " << mpmet << ", mtw2 = " << mtw2 <<  ", dphill = " << dphill << ", dphillmet = " << dphillmet << ", drll = " << drll;

// Depuración: imprimir resultado de la red
// std::cout << "[DNN] Valor retornado por la red: " << result << std::endl;
std::cout << "    print(\"Output \", load_neural_network(" << result << ")" <<  std::endl;

    //cout << "CC: Returning result DNN: " << result << endl;
    return (float)result;

if (result == -99.9f) {
    std::cerr << "[DNN ERROR] La red ha devuelto -99.9, posible fallo en Python o modelo.\n";
}

    Py_Finalize();
}

#endif
