import sys

def modify_cuts_file(cuts_file, var_name, cut_value):
    with open(cuts_file, 'r') as file:
        lines = file.readlines()

    new_lines = []
    cut_applied = False
    inside_tmp = False  # Flag para saber si estamos dentro de _tmp

    for line in lines:
        # Detectar el inicio de _tmp
        if '_tmp = [' in line:
            inside_tmp = True

        # Si estamos dentro de _tmp y encontramos el corte, lo reemplazamos
        if inside_tmp and var_name in line and '>=' in line:
            new_line = f'    "{var_name} > {cut_value}",\n'
            new_lines.append(new_line)
            cut_applied = True
            continue  # Saltamos la línea original para no duplicarla

        # Detectar el cierre de _tmp y, si no se ha aplicado el corte, añadirlo antes de ']'
        if inside_tmp and ']' in line:
            if not cut_applied:
                new_lines.append(f'    "{var_name} >= {cut_value}",\n')
                cut_applied = True
            inside_tmp = False  # Salimos de _tmp

        new_lines.append(line)

    with open(cuts_file, 'w') as file:
        file.writelines(new_lines)

    print(f"Corte aplicado {var_name} >= {cut_value} en el archivo {cuts_file}")

if __name__ == "__main__":
    if len(sys.argv) != 4:
        print("Número incorrecto de argumentos: python apply_cut.py cuts.py var_name cut_value")
        sys.exit(1)

    cuts_file = sys.argv[1]
    var_name = sys.argv[2]
    cut_value = sys.argv[3]

    modify_cuts_file(cuts_file, var_name, cut_value)

