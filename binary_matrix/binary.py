def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        a = []
        r = 0
        c = 0
        for _ in range(n):
            a.append([int(j) for j in input()])
        for i in range(n):
            curr_row = 0
            for j in range(m):
                curr_row ^= a[i][j]
            r += curr_row
        for j in range(m):
            curr_column = 0
            for i in range(n):
                curr_column ^= a[i][j]
            c += curr_column
        print(max(r, c))


if __name__ == "__main__":
    main()
