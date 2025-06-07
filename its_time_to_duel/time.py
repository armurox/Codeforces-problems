def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        consecutive_zeros = False
        prev = a[0]
        for elem in a[1:]:
            if prev == 0 and elem == 0:
                consecutive_zeros = True
                break
            else:
                prev = elem
            
        if 0 not in a or consecutive_zeros:
            print('YES')
        else:
            print('NO')
        

if __name__ == "__main__":
    main()
