def aventuras_nocturnas():
    visitas = 0
    while visitas < 10:  # El ciudadano solo puede hacer hasta 10 visitas
        torta = int(input("¿Hay pastel? (1 = sí, 0 = no): "))  # Pedir al usuario si hay pastel
        if torta == 1:
            print("Om-nom-nom :P")  # El ciudadano come pastel
        elif torta == 0:
            print("Sin pastel :(")  # El pastel se acabó
            break  # Terminar el ciclo porque ya no hay pastel
        else:
            print("Entrada inválida. Solo ingrese 1 o 0.")  # Manejo de entradas incorrectas
        visitas += 1  # Aumentar el número de visitas

# Llamada a la función
aventuras_nocturnas()
