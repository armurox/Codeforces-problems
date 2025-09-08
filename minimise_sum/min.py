def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        if min(a) == 0:
            i = a.index(0)
            sub_a = a[:i] if len(a[:i]) != 0 else [a[0]]
            print(min(sub_a) * len(a[:i]))
        elif n != 2:
            print(min(a) * (n - 1))
        else:
            print(min(a) * n)
    
    
if __name__ == '__main__':
    main()
