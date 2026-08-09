def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        x = a[:-1]
        print("YES" if sum(a) >= (n * (n + 1)) // 2 and sum(x) >= (n * (n - 1)) // 2 and (sum(x) - (n * (n - 1)) // 2) >= n - a[-1] else "NO")
    
    
if __name__ == "__main__":
    main()
