n = int(input())
m = int(input())
tasks = []
for i in range(m):
    a = int(input())
    tasks[i] = a
current = 1
time = 0
for task in tasks:
    if(task > current):
        time = (time +(task - current))
    else: 
        time = (time + (n - task))
    current = task

print(time)
