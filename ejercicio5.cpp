def imprimir_calendario(n, k):
    # Día de la semana del primer día, donde 1 es lunes y 7 es domingo.
    # n: Día de la semana del primer día (1 = lunes, 7 = domingo)
    # k: Número de días en el mes.
    
    # Crear una lista de días vacíos para el calendario
    calendario = []
    
    # Rellenar la primera fila con espacios hasta el primer día
    for i in range(n - 1):
        calendario.append("  ")  # Espacios vacíos para días previos
    
    # Llenar el calendario con los números de los días
    for i in range(1, k + 1):
        calendario.append(f"{i:2}")  # Añadir el día, formateado con dos espacios

    # Imprimir el calendario en formato de semanas
    for i in range(0, len(calendario), 7):
        # Unir y imprimir los elementos de la semana actual (de 7 días)
        print(" ".join(calendario[i:i+7]))

# Ejemplo de uso
n = int(input("Introduce el día de la semana del primer día del mes (1 = lunes, 7 = domingo): "))
k = int(input("Introduce el número de días en el mes: "))
imprimir_calendario(n, k)
