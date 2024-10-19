def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        ans = 0
        for i in range(max(n - (k - 1), 0), n + 1):
            ans += (i ** i)
        print("NO" if ans % 2 else "YES")
            
    
if __name__ == "__main__":
    main()
