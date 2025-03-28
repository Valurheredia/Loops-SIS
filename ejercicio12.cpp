def secuencia_y_serie():
    U = 1.0  # Inicializamos U0
    V = 0.0  # Inicializamos la serie V
    for n in range(10):
        # Imprimir el valor de Un
        print(f'U{n} = {U}')
        # Imprimir el valor de Vn (suma acumulada)
        print(f'V{n} = {V}')
        # Calcular el siguiente término de U
        U /= (n + 1)
        # Actualizar la suma de la serie V
        V += U

# Ejecutar la función para calcular la secuencia y la serie
secuencia_y_serie()
