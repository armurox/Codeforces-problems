import math
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        ans = 0
        for i in range(1, n):
            if max(a[i], a[i - 1]) - min(a[i], a[i - 1]) == math.gcd(a[i], a[i - 1]):
                ans += 1
        print(ans)
    
    
if __name__ == "__main__":
    main()
