def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a.sort()
        yes = True
        for i in range(len(a) - 1):
            if i % 2 and a[i] != a[i + 1]:
                yes = False
                print("NO")
                break
        if yes:
            print("YES")
            
   
if __name__ == '__main__':
    main()
