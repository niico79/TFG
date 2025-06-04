# Script que llama al archivo 2D_opti_fom.py para optimizar, calcular y obtener las gráficas de la figura de mérito para todos los puntos de masa.
# Como argumento se le pasa la categoría sobre la que se quiere analizar.

#!/bin/bash

# Argumento de la categoría (_tDM, _ttDM, _tttDM, ...)
CAT=$1

OUTPUT_TXT1="FoM/FoM_txt/FoM_optimos_mpmet_$CAT.txt"
OUTPUT_TXT2="FoM/FoM_txt/FoM_optimos_mtw2_$CAT.txt"

# Si existen, borra los archivos de texto de FoM para no sobrescribir
rm $OUTPUT_TXT1 $OUTPUT_TXT2

python 2D_opti_fom.py 1 50 $CAT

python 2D_opti_fom.py 1 100 $CAT

python 2D_opti_fom.py 1 150 $CAT

python 2D_opti_fom.py 1 200 $CAT

python 2D_opti_fom.py 1 250 $CAT

python 2D_opti_fom.py 1 300 $CAT

python 2D_opti_fom.py 1 350 $CAT

python 2D_opti_fom.py 1 400 $CAT

python 2D_opti_fom.py 1 450 $CAT

python 2D_opti_fom.py 1 500 $CAT

python 2D_opti_fom.py 20 100 $CAT

python 2D_opti_fom.py 30 100 $CAT

python 2D_opti_fom.py 40 100 $CAT

python 2D_opti_fom.py 45 100 $CAT

python 2D_opti_fom.py 49 100 $CAT

python 2D_opti_fom.py 51 100 $CAT

python 2D_opti_fom.py 55 100 $CAT
