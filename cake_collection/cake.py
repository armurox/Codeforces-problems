def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        a = list(map(int, input().split()))
        a.sort()
        min_num = 1 + (m - min(n, m))
        min_index =  n - m if (n - m) >= 0 else 0
        ans = 0
        for i in range(min_index, n):
            ans += min_num * a[i]
            min_num += 1
        print(ans)

    
if __name__ == "__main__":
    main()

