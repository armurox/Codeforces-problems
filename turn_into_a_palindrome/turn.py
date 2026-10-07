def main():
    t = int(input())
    for _ in range(t):
        n, c = input().split()
        n = int(n)
        s = input()
        coins = 0
        for i in range(n // 2):
            if s[i] != s[n - i - 1]:
                if s[i] != c and s[n - i - 1] != c:
                    coins += 2
                else:
                    coins += 1
        print(coins)
    
    
if __name__ == "__main__":
    main()
