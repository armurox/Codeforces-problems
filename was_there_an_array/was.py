def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        prev = 1
        count = int(a[0] == 0)
        one_before = a[0] == 1
        yes = True
        for elem in a[1:]:
            if prev == 0 and elem == 1 and count == 1 and one_before:
                print('NO')
                yes = False
                break
            if elem == 0:
                count += 1
            else:
                count = 0
            if prev == 1:
                one_before = True
            elif elem == 1 or count > 1:
                one_before = False
            prev = elem
        if yes:
            print('YES')
    
    
if __name__ == "__main__":
    main()
