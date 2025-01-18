def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        if len(set(a)) == 1:
            print('NO')
        else:
            print('YES')
            a.sort(reverse=True)
            a[1], a[-1] = a[-1], a[1]
            for elem in a:
                print(elem, end=" ")
            print()
    
    
if __name__ == "__main__":
    main()
