import time


def iterative(x):
    for j in range(x + 1):
        stuff = []
        for i in range(j):
            stuff.append(i)


start = time.time()
iterative(500000)
duration = time.time() - start

print(duration)
