def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        yes = False
        for i in range(1, n - 1):
            if s[i] in s[:i] + s[i + 1:]:
                yes = True
                print('YES')
                break
        if not yes:
            print('NO')
    
    
if __name__ == "__main__":
    main()
