def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        s = ""
        yes = True
        for _ in range(n):
            s += input()[0].upper()
        for _ in range(m):
            abbrev = input()
            for elem in abbrev:
                if elem not in s:
                    yes = False
        print("YES" if yes else "NO")


if __name__ == "__main__":
    main()

