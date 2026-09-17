def hasDistinct(num):
    while(num > 0):
        digit = num % 10
        remaining = num // 10
        while(remaining > 0):
            if remaining % 10 == digit:
                return False
            remaining //= 10
        num //= 10

    return True

y = int(input())
y += 1
while not hasDistinct(y):
    y += 1


print(y)

