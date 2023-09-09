#solicite al usuario dos numeros y sume si y solo si ambos sean primos
def esPrimo(numero):
    for i in range(2, numero):
        if numero % i == 0:
            print('El numero ', numero, ' no es primo, lo divide el numero ', i)
            return False
    return True

def evaluarCondicion(n1, n2):
    if esPrimo(a) & esPrimo(b):
        print('La suma es: ', a + b)
    else:
        print('No se cumple la condicion')

a = int(input('Ingrese un numero '))
b = int(input('Ingrese un numero '))
evaluarCondicion(a, b)