altura = int(input('Ingrese cuantas filas: '))
base = int(input('Ingrese cuantas columnas: '))
for i in range(altura):
    for j in range(base):
        if i == 0 or i == altura - 1:
            print('* ', end='')
        else:
            if j != 0 and j != base - 1:
                print('  ', end='')
            else:
                print('* ', end='')
    print()