def iteraciones_para_llegar_a_cero(n):
    iteraciones = 0
    while n != 0:
        if n % 3 == 0:
            n += 4  # Si es divisible por 3, sumamos 4
        elif n % 4 == 0:
            n //= 2  # Si es divisible por 4, dividimos entre 2
        else:
            n -= 1  # En caso contrario, restamos 1
        iteraciones += 1
    return iteraciones

def contar_iteraciones_en_rango(a, b):
    for i in range(a, b + 1):
        iteraciones = iteraciones_para_llegar_a_cero(i)
        print(f"El número {i} requiere {iteraciones} iteraciones para llegar a 0.")

# Entrada del usuario
a = int(input("Introduce el valor de a: "))
b = int(input("Introduce el valor de b: "))

# Llamamos a la función para contar las iteraciones
contar_iteraciones_en_rango(a, b)
