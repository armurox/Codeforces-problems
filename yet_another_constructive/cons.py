def main():
    t = int(input())
    for _ in range(t):
        n, k, m = list(map(int, input().split()))
        if k > m:
            print("NO")
            continue
        # Try to greedily create the sub-array
        ans = [m - (k - 1)]
        for _ in range(1, n):
            ans.append(1)
        else:
            print("YES")
            for elem in ans:
                print(elem, end=" ")
            print()


if __name__ == "__main__":
    main()
