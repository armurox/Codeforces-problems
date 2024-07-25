def main():
    t = int(input())
    for _ in range(t):
        n, f, k = map(int, input().split())
        a = list(map(int, input().split()))
        f = a[f - 1]
        a.sort(reverse=True)
        c = a.count(f)
        if f in a[:k]:
            print('YES') if c <= a[:k].count(f) else print('MAYBE')
        else:
            print('NO')
    
    
    
if __name__ == "__main__":
    main()

