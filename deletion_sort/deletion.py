def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        for i in range(n - 1):
            if a[i] > a[i + 1]:
                print(1)
                break
        else:
            print(n)


if __name__ == "__main__":
    main()
