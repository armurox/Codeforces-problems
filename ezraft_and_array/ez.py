def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n == 2:
            print(-1)
            continue
        print(1, end=" ")
        _sum = 1
        for i in range(1, n):
            if i in [1, 2]:
                print(i + 1, end=" ")
                _sum += i + 1
            else:
                print(_sum, end=" ")
                _sum += _sum
        print()


if __name__ == "__main__":
    main()
