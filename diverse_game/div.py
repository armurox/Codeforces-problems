def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        a = []
        for _ in range(n):
            a.append(list(map(int, input().split())))
        if n > 1:
            temp = a[0]
            for i in range(n - 1):
                a[i] = a[i + 1]
            a[n - 1] = temp
            
        else:
            temp = a[0][0]
            for i in range(m - 1):
                a[0][i] = a[0][i + 1]
            a[0][m - 1] = temp
        if n == 1 and m == 1:
            print(-1)
            continue
        else:
            for i in range(n):
                for j in range(m):
                    print(a[i][j], end=" ")
                print()


if __name__ == "__main__":
    main()
