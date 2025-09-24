mii = lambda : (list(map(int, input().split())))

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = mii()
        prev = a[0]
        count = 0
        result = []
        for i in range(1, n):
            if a[i] > prev:
                count += 1
                result.append(i + 1)
            prev = a[i]
        print(count)
        for elem in result:
            print(elem, end=' ')
        print()


if __name__ == '__main__':
    main()
