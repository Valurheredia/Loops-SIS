def secuencia():
    # Inicializamos el primer término
    U = 1.0
    # Imprimir el primer término
    print(f'U0 = {U}')
    
    # Calculamos los siguientes términos
    for n in range(1, 10):
        U /= (n + 1)  # Calculamos Un+1 usando la fórmula
        print(f'U{n} = {U}')

# Ejecutar el cálculo de la secuencia
secuencia()
