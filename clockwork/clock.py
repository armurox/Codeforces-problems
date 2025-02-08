def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        yes = True
        for i in range(n // 2 + 1):
            if a[i] <= 2 * ((n - i) - 1):
                print('NO')
                yes = False
                break
        if yes:
            for i in range(n // 2, n):
                if a[i] <= (2 * i):
                    print('NO')
                    yes = False
                    break
        if yes:
            print('YES')
                

if __name__ == "__main__":
    main()
