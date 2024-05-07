def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        min_true = False
        for i in range(n):
            if a[a[i] - 1] - 1 == i:
                print(2)
                min_true = True
                break
        if not min_true:
            print(3)

    
if __name__ == "__main__":
    main()
