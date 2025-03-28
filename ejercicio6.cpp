def suma_digitos(numero):
    suma = 0
    while numero > 0:
        suma += numero % 10  # Sumar el último dígito
        numero //= 10  # Eliminar el último dígito
    return suma

# Entrada
numero = int(input("Introduce un número entero no negativo: "))

# Asegurarse de que el número es no negativo
if numero >= 0:
    print(f"La suma de los dígitos es: {suma_digitos(numero)}")
else:
    print("Por favor, ingrese un número no negativo.")
