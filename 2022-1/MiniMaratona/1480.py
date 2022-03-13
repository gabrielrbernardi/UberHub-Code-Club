cota = int(input())

meses = int(input())

qtdMax = cota*meses
qtdUtilizada = 0

for i in range(meses):
    N = int(input())
    qtdUtilizada = qtdUtilizada + N

print(cota + qtdMax - qtdUtilizada)