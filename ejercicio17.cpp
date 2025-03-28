def es_primo(num):
    if num <= 1:
        return False
    for i in range(2, int(num ** 0.5) + 1):  # Solo verificamos hasta la raíz cuadrada
        if num % i == 0:
            return False
    return True

def primeros_n_primos(n):
    primos = []
    num = 2  # Comenzamos desde el primer número primo
    while len(primos) < n:
        if es_primo(num):
            primos.append(num)
        num += 1
    return primos

# Entrada del usuario
n = int(input("Introduce el número de primos que deseas: "))

# Obtener los primeros n números primos
primos = primeros_n_primos(n)

# Mostrar el resultado
print(f"Los primeros {n} números primos son: {primos}")
