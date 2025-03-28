import math

def calcular_factorial():
    while True:
        try:
            numero = int(input("Introduce un número no negativo: "))
            
            # Verificar si el número es negativo
            if numero < 0:
                print("El número es negativo. Intentelo de nuevo.")
                continue
            
            # Verificar si el número es mayor que 14
            if numero > 14:
                print("El número es muy grande. Intentelo de nuevo.")
                continue
            
            # Calcular el factorial
            factorial = math.factorial(numero)
            print(f"El factorial de {numero} es: {factorial}")
            break  # Salir del bucle después de un cálculo exitoso

        except ValueError:
            print("Por favor, ingrese un número entero válido.")

# Llamar a la función
calcular_factorial()
