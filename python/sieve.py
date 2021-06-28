def sieve(n):
    data = [False for x in range(n)]

    print(1, end=" ")
    for i in range(2, n):
        if not data[i]:
            print(i, end=" ")
        for j in range(i, n, i):
            data[j] = True
    print()

from sys import argv

n = 100
if len(argv) == 2:
    n = int(argv[1])
print("Primes from 1 to", n)
sieve(n)
