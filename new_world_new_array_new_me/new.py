def main():
    t = int(input())
    for _ in range(t):
        n, k, p = map(int, input().split())
        print((abs(k) // p + (1 if abs(k) % p else 0)) if ((abs(k) // p + (1 if abs(k) % p else 0)) <= n) else -1)


if __name__ == "__main__":
    main()
