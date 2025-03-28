def es_palindromo(cadena):
    # Eliminar los espacios de la cadena
    cadena_sin_espacios = cadena.replace(" ", "")
    
    # Comprobar si la cadena sin espacios es igual a su reverso
    if cadena_sin_espacios == cadena_sin_espacios[::-1]:
        return "YES"
    else:
        return "NO"

# Entrada
cadena = input("Introduce una cadena de texto: ")

# Imprimir el resultado
print(es_palindromo(cadena))
