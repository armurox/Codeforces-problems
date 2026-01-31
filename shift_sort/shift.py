def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        a = ''.join(sorted(s))
        ans = 0
        for i in range(len(a)):
            if a[i] != s[i]:
                ans += 1
        print(ans // 2)
    
    
    
if __name__ == "__main__":
    main()
