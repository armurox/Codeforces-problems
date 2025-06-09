def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        if a.count(a[0]) == len(a):
            print('NO')
        else:
            print('YES')
            first_max = False
            max_a = max(a)
            for elem in a:
                if elem == max_a and not first_max:
                    print(1, end=' ')
                    first_max = True
                else:
                    print(2, end=' ')
            print()


if __name__ == "__main__":
    main()
