def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        a_n = a[n - 1]
        b_n = b[n - 1]
        yes = True
        for i in range(n - 1):
            if (a[i] <= a_n and b[i] <= b_n) or (a[i] <= b_n and b[i] <= a_n):
                continue
            else:
                yes = False
                print("NO")
                break
        if (yes):
            print("YES")

    
if __name__ == "__main__":
    main()
