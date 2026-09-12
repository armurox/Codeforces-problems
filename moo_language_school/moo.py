def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        s = input()
        i = 0
        ans = 0
        while i < n:
            if '0' in s[i: i + k]:
                i += k
                continue
            ans += 1
            i += k
        print(ans)
    
    
if __name__ == "__main__":
    main()
