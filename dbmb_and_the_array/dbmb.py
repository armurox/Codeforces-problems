def main():
    t = int(input())
    for _ in range(t):
        n, s, x = map(int, input().split())
        a = list(map(int, input().split()))
        sum_a = sum(a)
        if sum_a > s:
            print('NO')
        elif (s - sum_a) % x == 0:
            print('YES')
        else:
            print('NO')


if __name__ == "__main__":
    main()
