escolares = 0
hijos = int(input('Cuantos hijos tiene: '))
viuda = int(input('Si es viuda presione 1, si no 0: '))
extra = 0
if viuda == 1:
    extra = 20
for i in range(0, hijos):
    print('Cuantos anios tiene el hijo ', i + 1)
    edad = int(input())
    if (edad >= 6 and edad <= 18):
        escolares = escolares + 1
total = 0
if hijos <= 2:
    total = (hijos * 70) + (escolares * 10) + extra
else:
    if hijos >= 3 and hijos <= 5:
        total = (hijos * 90) + (escolares * 10) + extra
    else:
        total = (hijos * 120) + (escolares * 10) + extra
print('Total: ', total)
