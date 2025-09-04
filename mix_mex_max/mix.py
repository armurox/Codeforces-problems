def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        if 0 in a:
            print('NO')
            continue
        a_set = set(a)
        if len(a_set) == 2 and -1 in a:
            print('YES')
            continue
        if len(a_set) == 1:
            print('YES')
        else:
            print('NO')
        
    
    
if __name__ == "__main__":
    main()
