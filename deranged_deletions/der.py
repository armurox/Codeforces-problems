def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        found = False
        for i in range(n - 1):
            if a[i] > a[i + 1]:
                print('YES')
                print(2)
                print(a[i], a[i + 1])
                found = True
                break
        if not found:
            print('NO')
    
    
if __name__ == "__main__":
    main()
