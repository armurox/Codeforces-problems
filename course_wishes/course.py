def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        b = list(map(int, input().split()))
        a = list(map(int, input().split()))
        valid_tuples = [[]] * (k + 1)
        # print('test', valid_tuples)
        for i in range(n):
            valid_tuples[a[i] - 1].append((k + 1 - a[i], i + 1))
        ans = []
        for i in reversed(range(len(valid_tuples[0]))):
            res = valid_tuples[0][i][0]
            while res > 0:
                ans.append(valid_tuples[0][i][1])
                res -= 1
        print(len(ans))
        for elem in ans:
            print(elem, end=" ")
        print()


if __name__ == "__main__":
    main()

