def main():
    t = int(input())
    for _ in range(t):
        s = input()
        ans = 0
        for i in range(len(s) - 1):
            ans += (s[i] == s[i + 1])
        print('YES' if ans <= 2 else 'NO')


if __name__ == "__main__":
    main()
