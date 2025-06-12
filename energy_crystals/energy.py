def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = 0
        b = 0
        c = 0
        ans = 0
        while (min(a, b, c) < n):
            if a <= b and a <= c:
                a = 2 * min(b, c) + 1
            elif b <= c and b <= a:
                b = 2 * min(a,c) + 1
            else:
                c = 2 * min(a, b) + 1
            ans += 1
        print(ans)
    
    
if __name__ == "__main__":
    main()
