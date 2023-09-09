def suma(a, b):
    return a + b

def esPar(numero):
    return numero % 2 == 0

def esPrimo(numero):
    for i in range(2, numero):
        if numero % i == 0:
            return False
    return True

def procedimientoSuma(a, b):
    print('La suma (procedimiento) es ', a + b)

numero1 = int(input('Ingrese primer valor: '))
numero2 = int(input('Ingrese primer valor: '))
if esPrimo(numero1) & esPrimo(numero2):
    if esPar(numero1 + numero2):
        print('La suma es ', suma(numero1, numero2))
        procedimientoSuma(numero1, numero2)