def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        a = list(map(int, input().split()))
        if sum(a) <= m:
            print(0)
            continue
        for i in range(n):
            m -= a[i]
            value = 0
            if m < 0:
                value = -m
                m += -m
            if m == 0 and i != n - 1:
                m = sum(a[i + 1:]) + value
                break
            elif m == 0 and value:
                m += value
                break
        print(m)
    
    
if __name__ == "__main__":
    main()
