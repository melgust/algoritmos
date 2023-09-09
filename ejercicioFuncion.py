def contarVocales():
    vocales = 'aeiou'
    nombre = input('Ingrese su nombre completo: ')
    tiene = False
    for letra in nombre:
        for vocal in vocales:
            if letra == vocal:
                tiene = True
    if tiene:
        print('Tiene vocales')
    else:
        print('No tiene')
contarVocales()
            