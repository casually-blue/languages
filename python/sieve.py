def sieve(n):
    # create a list of non-prime numbers
    data = [False for x in range(n)]

    print(1, end=" ")
    # go through all the numbers
    for i in range(2, n):
        # if the number is prime, print it
        if not data[i]:
            print(i, end=" ")
        # set all multiples of the number as not prime
        for j in range(i, n, i):
            data[j] = True
    print()

from sys import argv

# set the default value
n = 100
if len(argv) == 2:
    # read the number to check for primes under
    n = int(argv[1])
print("Primes from 1 to", n)
sieve(n)
