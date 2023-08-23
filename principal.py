from cronometro import cronometro

c = cronometro()

for i in range (1):
    print(c.hora.valor, c.minuto.valor , c.segundo.valor)
    c.avanzar()