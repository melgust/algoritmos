file1 = open('leer.txt', 'r')
strNumber = file1.readline()
file1.close()
n = int(strNumber)
for i in range(n):
    for j in range(n):
        if i == 0 or i == n - 1:
            print('* ', end='')
        else:
            if j != 0 and j != n - 1:
                print('  ', end='')
            else:
                print('* ', end='')
    print()