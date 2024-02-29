def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        yes = True
        max_reduction = 0
        for i in range(n):
            if b[i] == 0 and a[i] > max_reduction:
                max_reduction = a[i]
        for i in range(n):
            a[i] -= max_reduction
            if a[i] < 0:
                a[i] = 0
        max_reduction = 0
        for i in range(n):
            if a[i] > b[i]:
                max_reduction = a[i] - b[i]
                break
        for i in range(n):
            a[i] -= max_reduction
            if a[i] < 0:
                a[i] = 0
            if a[i] != b[i]:
                print("NO")
                yes = False
                break         
            
        if yes:
            print("YES")
    

if __name__ == "__main__":
    main()
