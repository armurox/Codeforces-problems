import math

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        p = list(map(int, input().split()))
        k = p[0] - 1
        for i in range(1, n):
            k = math.gcd(k,  abs(p[i] - i - 1))
        print(k)

    
if __name__ == '__main__':
    main()

