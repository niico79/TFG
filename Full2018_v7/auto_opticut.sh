

#!/bin/bash

# Parámetros
MCHI=$1
MPHI=$2
VAR=$3 # mpmet, mtw2
CATEGORY=$4  # Categoría (ejemplo: 1bj, tttDM)


# Directorios
OUTPUT_DIR="outputs"

mkdir -p $OUTPUT_DIR

# Optimización en la primera variable
echo "Optimizando en la variable $VAR1..."
python 1D_opti_fom.py $MCHI $MPHI $CATEGORY $VAR > $OUTPUT_DIR/fom_$VAR.txt

# Extrae el corte óptimo desde el archivo de salida
CUT=$(grep "Mejor corte para $VAR" $OUTPUT_DIR/fom_$VAR.txt | awk '{print $NF}')
echo "Corte óptimo en $VAR: $CUT"

# Aplica el corte en cuts.py
python apply_cuts.py cuts.py $VAR $CUT

# Ejecuta mkShapes
echo "Ejecutando mkShapes con corte en $VAR1..."
mkShapesRDF -c 1

