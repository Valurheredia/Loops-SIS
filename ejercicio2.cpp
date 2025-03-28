def palabras_con_corchetes(linea):
    word = ""
    for char in linea:
        if char != " ":
            word += char  # Agregar carácter a la palabra
        else:
            print(f"[{word}]")  # Imprimir palabra entre corchetes
            word = ""  # Reiniciar palabra
    print(f"[{word}]")  # Imprimir la última palabra

# Ejemplo de entrada
entrada = "green parrot"
palabras_con_corchetes(entrada)
