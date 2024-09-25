def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        b = []
        _sum = 0
        for i in range(1, n):
            b.append(abs(a[i] - a[i - 1]))
            _sum += b[-1]
        b.sort()
        for i in range(1, k):
            _sum -= b.pop(-1)
        print(_sum)


if __name__ == "__main__":
    main()

