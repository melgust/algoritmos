def contarVocales():
    vocales = 'aeiou'
    nombre = input('Ingrese su nombre completo: ')
    for letra in nombre:
        for vocal in vocales:
            