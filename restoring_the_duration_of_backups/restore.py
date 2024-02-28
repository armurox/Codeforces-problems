def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = list(map(int, input().split()))
        f = list(map(int, input().split()))
        prev = s[0]
        for i in range(n):
            duration = (f[i] - prev) if prev > s[i] else f[i] - s[i]
            prev = f[i]
            print(duration, end=" ")
        print()
    
    
if __name__ == "__main__":
    main()
