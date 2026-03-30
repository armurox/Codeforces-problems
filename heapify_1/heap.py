def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        if n == 1:
            print('YES')
            continue
        prev = a[0]
        count = 0
        for i in range(1, n):
            if a[i] < prev:
                count += 1
            prev = a[i]
        print('YES' if count % 2 == 0 else 'NO')
                
    
    
if __name__ == "__main__":
    main()

