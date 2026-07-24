import sys
import math

def read_int():
    return int(sys.stdin.readline().strip())

def solve():
    n = read_int()
    ans = 1
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            ans *= i
            while n % i == 0:
                n //= i
    print(ans * n)

T = read_int()
for _ in range(T):
    solve()
