def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        prev = a[0] % 2
        sort_it = False
        for elem in a[1:]:
            if elem % 2 == prev:
                prev = elem % 2
                continue
            else:
                sort_it = True
                break
        if sort_it:
            a.sort()
            for elem in a:
                print(elem, end=' ')
            print()
        else:
            for elem in a:
                print(elem, end=' ')
            print()
    
    
if __name__ == "__main__":
    main()
