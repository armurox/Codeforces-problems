def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        k = 3 * n
        for i in range(1, n + 1):
            print(i, k - 1, k, end=" ")
            k -= 2
        print()


if __name__ == "__main__":
    main()
