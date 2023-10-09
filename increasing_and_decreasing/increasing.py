def main():
    cn = int(input())
    for _ in range(cn):
        x, y, n = map(int, input().split())
        a = [x]
        prev = x
        b_r = []
        diff = y - x
        _sum = 0
        for i in range(1, n - 1):
            b_r.append(i)
            last = i
            _sum += last
        if last >= diff - _sum:
            print(-1)
        else:
            b_r.append(diff - _sum)
            for element in reversed(b_r):
                a.append(prev + element)
                prev = a[-1]
            for element in a:
                print(element, end = " ")
            print()

    

if __name__ == "__main__":
    main()
