def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        if n % 2:
            print("NO")
            continue
        
        r = a[0]
        l = a[1]
        for i in range(n):
            if i % 2 and a[i] > l:
                l = a[i]
            elif i % 2 == 0 and a[i] < r:
                r = a[i]
        print("YES" if l + 2 <= r else "NO")

    
if __name__ == "__main__":
    main()
