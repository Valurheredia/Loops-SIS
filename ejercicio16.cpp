def division_suma_resta(dividendo, divisor):
    # Verificar si el divisor es cero para evitar división por cero
    if divisor == 0:
        return "Error: división por cero no permitida"
    
    cociente = 0
    residuo = dividendo
    
    # Realizar la resta sucesiva
    while residuo >= divisor:
        residuo -= divisor
        cociente += 1
    
    return cociente, residuo

# Entrada del usuario
dividendo = int(input("Introduce el dividendo: "))
divisor = int(input("Introduce el divisor: "))

# Obtener cociente y residuo usando solo suma y resta
cociente, residuo = division_suma_resta(dividendo, divisor)

# Mostrar el resultado
print(f"Cociente: {cociente}, Residuo: {residuo}")
