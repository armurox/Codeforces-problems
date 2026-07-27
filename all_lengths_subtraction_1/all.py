def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        l = 0
        r = n - 1
        for i in range(1, n):
            if a[l] == i:
                l += 1
            elif a[r] == i:
                r -= 1
            else:
                print("NO")
                break
        else:
            print("YES")


if __name__ == "__main__":
    main()
