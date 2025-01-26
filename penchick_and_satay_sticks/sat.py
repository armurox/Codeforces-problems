def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        yes = True
        for i in range(n):
            if abs(a[i] - (i + 1)) > 1:
                print('NO')
                yes = False
                break
        if yes:
            print('YES')
    
    
if __name__ == "__main__":
    main()
