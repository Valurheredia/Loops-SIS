def suma_algebraica(N, k):
    suma = 0
    for i in range(1, N + 1):
        suma += i ** k  # Calcula i elevado a la k y suma al total
    return suma

# Entrada de usuario
N = int(input("Introduce el valor de N: "))
k = int(input("Introduce el valor de k: "))

# Calcular y mostrar el resultado
resultado = suma_algebraica(N, k)
print(f"La suma algebraica es: {resultado}")
