def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        if n <= k:
            print(1 if n != 0 else 0)
        elif n % 2:
            curr = n - k
            div = k - 1
            print((curr // div + (1 if curr % div else 0) + 1))
        else:
            curr = n - k
            div = k - 1
            print((curr // div + (1 if curr % div else 0) + 1))
    

if __name__ == "__main__":
    main()
