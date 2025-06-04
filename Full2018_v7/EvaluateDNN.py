"""
Script que carga el modelo entrenado por TMVA para su implementación en mkShapes, pudiendo además realizar pruebas en local.

Código adaptado de Jesús Vizán
"""

# EvaluateDNN.py
import os
import numpy as np
from tensorflow.keras.models import load_model


# Load the model
model_path = '/afs/cern.ch/user/n/nbabioel/DNN/modelClassification_OutputV23_PartData.h5'
model = load_model(f'{model_path}')


# Carga el modelo con verificación
print(f"Contenido del directorio actual: {os.listdir()}")
print(f"Intentando cargar el modelo desde: {model_path}")

try:
    model = load_model(model_path)
    print("Modelo cargado correctamente.")
except Exception as e:
    print("Error cargando el modelo:", e)
    model = None


def load_neural_network(inputs):
    print("EvaluateDNN se ha ejecutado correctamente con inputs:", inputs)

    if model is None:
        print("Error: modelo no cargado. Devolviendo -99.9")
        return [-99.9]

    try:
        result = model.predict(np.array(inputs).reshape(1, -1), verbose = 0)
        #print ("Py: len(result)", len(result), " len(result[0])",  len(result[0]), "result[0][0] =", result[0][0], "result[0][1] =", result[0][1])
        #print ("Py: inputs=", inputs)
        return [result[0][0]]
    except Exception as e:
        return [-99.9]

if __name__ == "__main__":
    print ("do nothing")
    # You can include some test code here for local testing
    test_input = [27.564178466796875, 35.46138381958008, 1.165021300315857, 2.116377830505371, 1.3028650283813477]
    test_2 = [23.252967834472656, 35.27327346801758, 0.44921875, 0.7586635947227478, 0.6091210842132568]
    test_3 = [21.753767013549805, 25.619529724121094, 0.16552734375, 1.0722718238830566, 0.712250292301178]
    #3second_test = [145.73484802246094, 120.59391021728516, -0.443359375, -0.7113037109375, 37.01284408569336, 552.005859375, 408.7455749511719, 371.141357421875, 266.1398010253906, 0.2784280478954315, 0.07568359375, 286.85198974609375, 0.2679443359375, 281.60650634765625, 33.007198333740234, 278.4770202636719, 317.86181640625, 617.2410278320312, 576.8833618164062]

    #third_test=[46.33038330078125, 67.77999114990234, 1.016583800315857, 1.5698885917663574, 273.18817138671875, 3.8935546875, 2.430358409881592, 87.21562194824219, 127.06076049804688, 182.793212890625, 31.92623519897461, 59.24596405029297, 14.16585922241211, -1.598876953125, -0.402587890625, 43.57255554199219, 33.882598876953125, -1.80078125, 2.0927734375]


    #fourth_test=[33.734283447265625, 15.957340240478516, 2.2467041015625, 2.2920875549316406, 99.91847229003906, 0.6724853515625, 0.6909784078598022, 12.17416763305664, 60.93716049194336, 159.939453125, 20.24593734741211, 19.641782760620117, 16.741363525390625, 1.54541015625, 1.091552734375, 66.85108947753906, 36.45927810668945, 1.197509765625, 0.5250244140625]
    
    result = load_neural_network(test_input)
#    print("Result dumy1:", result)

    result2 = load_neural_network(test_2)
    result3 = load_neural_network(test_3)
#    print("Result dumy1:", result2)
#    print("Result dumy1:", result3)

    print("New: ", load_neural_network([47.834098, 74.756218, 2.7249755, 3.0701968, 2.7250962]))
    print("New: ", load_neural_network([124.375, 138.80925, 1.5229492, 2.3924257, 3.2619845]))
    print("New: ", load_neural_network([166.5, 227.14468, 1.3393377, 2.0807762, 2.7346503]))
    print("New: ", load_neural_network([18.479564, 35.083530, 0.4140625, 1.6472148, 0.7225682]))
    print("New: ", load_neural_network([59.946643, 43.123874, 2.8539860, 1.8290861, 2.8540260]))
# result = load_neural_network(second_test)
    # print("Result dumy2:", result)


    # result = load_neural_network(third_test)
    # print("Result: real1", result)

    # result = load_neural_network(fourth_test)
    # print("Result: real2", result)

