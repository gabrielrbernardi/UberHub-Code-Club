qtdRepeticoes = int(input())
tempDict = {}

for i in range(qtdRepeticoes):
    #leitura das palavras para serem traduzidas
    stringEntrada = str(input())
    stringEntrada = stringEntrada.split(" ")
    #Criando uma estrutura de chave: valor, para auxiliar na traducao dos valores
    tempDict[stringEntrada[0]] = stringEntrada[1]

fraseTraducao = str(input())

#Quebrando a frase em tokens, para usar na traducao
fraseTraducao = fraseTraducao.split("_")

#Repeticao para mostrar os valores traduzidos
for indice, valor in enumerate(fraseTraducao):
    #se for o ultimo valor, saltara uma linha
    if indice == len(fraseTraducao) - 1:
        print(tempDict[valor])
    #Caso contrario, mostrara os valores, em seguida, um espaco
    else:
        print(tempDict[valor], end=" ")