def mcd(a, b):
    while b != 0:
        a, b = b, a % b  # Aplicar el algoritmo de Euclides
    return a

# Entrada
a = int(input("Introduce el primer número natural: "))
b = int(input("Introduce el segundo número natural: "))

# Imprimir el resultado
print(mcd(a, b))
