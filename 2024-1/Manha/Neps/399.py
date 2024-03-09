texto = input()

vogais = ""
consoantes = ""

for char in texto:
    if char in "aeiou":
        vogais += char
    else:
        consoantes += char

print("Vogais:", vogais)
print("Consoantes:", consoantes)