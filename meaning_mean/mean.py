def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        a.sort()
        f = a[0]
        for elem in a[1:]:
            f = (f + elem) // 2
        print(f)
    
    
if __name__ == "__main__":
    main()
