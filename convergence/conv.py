def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a.sort()
        count = 0
        for i in range(n // 2):
            if a[i] != a[n - 1 - i]:
                count += 1
        print(count)


if __name__ == "__main__":
    main()

