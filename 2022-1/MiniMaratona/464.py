atual = -1
qtdMarcados = 0

qtdCasos = int(input())

for i in range(qtdCasos):
    x = int(input())
    
    if atual != x:
        atual = x
        qtdMarcados = qtdMarcados + 1
print(qtdMarcados)