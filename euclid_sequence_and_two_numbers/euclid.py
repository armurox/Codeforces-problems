def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a.sort(reverse=True)
        for i in range(1, n):
            if i == 1:
                continue
            if a[i - 2] % a[i - 1] == a[i]:
                continue
            else:
                print(-1)
                break
        else:
            print(a[0], a[1])

    
if __name__ == "__main__":
    main()
