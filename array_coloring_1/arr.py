def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        color_map = {}
        prev = 'red'
        for elem in a:
            if prev == 'red':
                color_map[elem] = 'blue'
                prev = 'blue'
            else:
                color_map[elem] = 'red'
                prev = 'red'
        a.sort()
        for i in range(len(a) - 1):
            if color_map[a[i]] == color_map[a[i + 1]]:
                print('NO')
                break
        else:
            print('YES')


if __name__ == "__main__":
    main()
