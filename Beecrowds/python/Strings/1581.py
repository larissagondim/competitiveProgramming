n = int(input())

for _ in range(n):
    k = int(input())
    
    idiomas = set()
    
    for _ in range(k):
        idioma = input().strip()
        idiomas.add(idioma)
    
    if len(idiomas) == 1:
        print(idiomas.pop())
    else:
        print("ingles")