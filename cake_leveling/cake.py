def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        print(a[0], end=" ")
        _sum = a[0]
        count = 1
        ans = _sum // count
        for i in range(1, n):
            _sum += a[i]
            count += 1
            ans = min(ans, _sum // count)
            print(ans, end=" ")
        print()
    
if __name__ == "__main__":
    main()
