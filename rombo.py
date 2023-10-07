def isOdd(n):
    return n % 2 == 1

ok = False
while ok == False:
    n = int(input("Ingrese numero impar: "))
    ok = isOdd(n)

caracter = input("Ingrese caracter: ")
for i in range(n):
    for j in range(n - i - 1):
        print(" ", end=" ")
    for j in range(2 * i + 1):
        print(caracter, end=" ")
    print()
for i in range(n - 2, -1, -1):
    for j in range(n - i - 1):
        print(" ", end=" ")
    for j in range(2 * i + 1):
        print(caracter, end=" ")
    print()