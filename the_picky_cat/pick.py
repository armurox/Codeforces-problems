def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        
        pairs = [(abs(a[i]), i) for i in range(n)]
        pairs.sort()
        
        ans = [0] * n
        
        for i in range(n // 2 + 1):
            _, index = pairs[i]
            ans[index] = 1
        
        if ans[0]:
            print("YES")
        else:
            print("NO")


if __name__ == "__main__":
    main()
