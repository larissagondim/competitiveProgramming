test = int(input())

for i in range(test):
    a, b = input().split()

    if a.endswith(b):
        print("encaixa")
    else:
        print("nao encaixa")