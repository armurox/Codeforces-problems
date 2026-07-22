def main():
    t = int(input())
    for _ in range(t):
        n, c, k = map(int, input().split())
        a = list(map(int, input().split()))
        a.sort()
        for elem in a:
            if elem <= c:
                diff = c - elem
                if k >= diff:
                    k -= diff
                    c += diff + elem
                else:
                    c += k + elem
                    k = 0
            else:
                break
        print(c)


if __name__ == "__main__":
    main()
