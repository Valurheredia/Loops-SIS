def decimal_a_binario(num):
    if num == 0:
        return "0"
    
    binario = ""
    
    while num > 0:
        resto = num % 2
        binario = str(resto) + binario  # Agregar el resto al principio de la cadena
        num = num // 2  # División entera por 2
    
    return binario

# Entrada del usuario
numero_decimal = int(input("Introduce un número decimal: "))

# Convertir a binario
binario = decimal_a_binario(numero_decimal)

# Mostrar el resultado
print(f"El número {numero_decimal} en binario es: {binario}")
