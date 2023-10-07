vowels = 'aeiou'
consonants = 'bcdfghjklmnpqrstvwxyx'

def countVowel(line):
    total = 0
    for c in line:
        for vowel in vowels:
            if c.lower() == vowel:
                total += 1
    return total

file1 = open('archivo.txt', 'r')
line = file1.readline()
file1.close()
file2 = open('salida.txt', 'w')
file2.write('El texto ')
file2.close()