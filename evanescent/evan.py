def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = input()
        ans = 1
        x = 0
        for i in range(1, n):
            if a[i] != a[i - 1]:
                ans += 1
            if i == n - 1:
                break
            if a[i] != a[i + 1] and a[i] != a[i - 1]:
                if a[i - 1] == a[i + 1]:
                    x = 2
                else:
                    x = max(x, 1)
        print(ans - x)
    
    
if __name__ == "__main__":
    main()
