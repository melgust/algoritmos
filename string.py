vocales = 'aeiou'
nombre = input('Ingrese su nombre: ')
salida = ''
for i in range(0, len(nombre)):
    letra = nombre[i]
    encontrado = False
    for j in range(0, len(vocales)):
        vocal = vocales[j]
        if letra == vocal:
            encontrado = True
    if encontrado:
            salida += '_'
    else:
        salida += nombre[i]
print(salida)