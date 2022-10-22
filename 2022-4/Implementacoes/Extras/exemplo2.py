lista = []
lista.append({"name": "val1", "ocorrencias": 0})
lista.append({"name": "val2", "ocorrencias": 0})
lista.append({"name": "val3", "ocorrencias": 0})
lista.append({"name": "val4", "ocorrencias": 0})
lista.append({"name": "val5", "ocorrencias": 0})
lista.append({"name": "val6", "ocorrencias": 0})
lista.append({"name": "val7", "ocorrencias": 0})
lista.append({"name": "val8", "ocorrencias": 0})
lista.append({"name": "val9", "ocorrencias": 0})

val = input()

for i, elem in enumerate(lista):
    print(i)
    print(elem)
    if lista[i]["name"] == val:
        lista[i]["ocorrencias"] += 1

print(lista)