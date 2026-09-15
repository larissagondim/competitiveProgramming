a, b = map(int, input().split())

linha_atual = []

for i in range(1, b + 1):
    linha_atual.append(str(i))

    if len(linha_atual) == a:
        print(" ".join(linha_atual))
        linha_atual = []

if len(linha_atual) > 0:
    print(" ".join(linha_atual))