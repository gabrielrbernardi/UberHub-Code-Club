values = list(map(float, input().split()))
values.sort(reverse=True)
# print(values)
a, b, c = values[0], values[1], values[2]
if a>=b+c:
    print("NAO FORMA TRIANGULO")
elif a**2 == b**2 + c**2:
    print("TRIANGULO RETANGULO")
elif a**2 > b**2 + c**2:
    print("TRIANGULO OBTUSANGULO")
elif a**2 < b**2 + c**2:
    print("TRIANGULO ACUTANGULO")

if a == b and b == c:
    print("TRIANGULO EQUILATERO")

if (a == b and b != c) or (a == c and b != c) or (b == c and a != c):
    print("TRIANGULO ISOSCELES")

# if a < b+c and a**2 != (b**2 + c**2):
#     if a == b and b == c:
#     else: