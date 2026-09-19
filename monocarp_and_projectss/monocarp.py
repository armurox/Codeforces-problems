def main():
    t = int(input())
    for _ in range(t):
        x, y, k = map(int, input().split())
        ans = 0
        for i in range(min(y, k)):
            ans += (y + i) % (x + i)
        full = max(0, k - y)
        ans += full * (y - x)
        print(ans)
    
    
if __name__ == "__main__":
    main()
