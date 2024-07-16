def main():
    t = int(input())
    for _ in range(t):
        n, a, b = map(int, input().split())
        diff = b - a
        ans = 0
        if diff > 0:
            if n <= diff:
                for i in range(1, n + 1):
                    ans += b - i + 1
            else:
                for i in range(1, diff + 1):
                    ans += b - i + 1
        if diff <= 0:
            ans = n * a
        elif n - diff > 0:
            for i in range(n - diff):
                ans += a
        print(ans)
    
    
if __name__ == "__main__":
    main()
