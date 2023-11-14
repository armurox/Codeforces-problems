def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        ps = list(map(int, input().split()))
        ps = sorted(ps, reverse=True)
        _sum = 0
        i = 0
        while (i < 2 * n - 1):
            if i < n - 1:
                _sum += ps[i] - ps[i + 1]
                i += 1
            elif i > n - 1:
                _sum += ps[i] - ps[i + 1]
                i += 1
            else:
                i += 1
                
        print(_sum)
        for _ in range(n):
            print(ps.pop(0), ps.pop())
    
    
if __name__ == "__main__":
    main()
