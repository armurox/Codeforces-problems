import math
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        if n == 1:
            print(a[0])
        else:
            print(math.gcd(a[0], a[-1]))
    
    
if __name__ == "__main__":
    main()
