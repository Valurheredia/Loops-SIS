def palabra_indices(linea):
    palabras = linea.split()  # Dividir la línea en palabras
    indices = []
    indice_actual = 0
    
    for palabra in palabras:
        indice_actual += len(palabra)  # Calcular índice final de la palabra
        indices.append(indice_actual)  # Guardar el índice
        indice_actual += 1  # Sumar 1 por el espacio entre palabras
    
    return indices  # Retornar la lista de índices

# Ejemplo de entrada
entrada = "green parrot"
resultado = palabra_indices(entrada)
for indice in resultado:
    print(indice)

      
