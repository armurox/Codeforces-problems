def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = [int(elem) for elem in input().split()]
        s_6, s_2, s_3, s_1 = [], [], [], []
        for elem in a:
            if elem % 6 == 0:
                s_6.append(elem)
            elif elem % 2 == 0:
                s_2.append(elem)
            elif elem % 3 == 0:
                s_3.append(elem)
            else:
                s_1.append(elem)
        ans = []
        for elem in s_6:
            ans.append(elem)
        for elem in s_2:
            ans.append(elem)
        for elem in s_1:
            ans.append(elem)
        for elem in s_3:
            ans.append(elem)
        for elem in ans:
            print(elem, end=' ')
        print()


if __name__ == "__main__":
    main()
