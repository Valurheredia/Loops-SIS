def calcular_ln2(n):
    suma = 0.0  # Inicializamos la suma como un número de punto flotante (double)
    for i in range(1, n + 1):
        # Alternar el signo usando (-1)^(i+1)
        suma += ((-1)**(i + 1)) / i
    return suma

# Entrada
n = int(input("Introduce un número entero positivo n: "))

# Calcular y mostrar el resultado
resultado = calcular_ln2(n)
print(f"La suma de los primeros {n} términos de la serie es: {resultado}")
