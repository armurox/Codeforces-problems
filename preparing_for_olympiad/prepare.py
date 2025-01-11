def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        _sum = 0
        for i in range(n - 1):
            diff = a[i] - b[i + 1]
            if diff > 0:
                _sum += diff
        _sum += a[n - 1]
        print(_sum)
    
    
if __name__ == "__main__":
    main()
