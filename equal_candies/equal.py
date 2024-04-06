def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        min_a = min(a)
        ans = 0
        for elem in a:
            ans += elem - min_a
        print(ans)


if __name__ == "__main__":
    main()
