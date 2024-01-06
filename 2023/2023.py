def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        b = list(map(int, input().split()))
        prod = 1
        for num in b:
            prod *= num
        if 2023 % prod == 0:
            print("YES")
            print(2023 // prod, end=" ")
            for _ in range(k - 1):
                print(1, end=" ")
            print()
        else:
            print("NO")
    
    
if __name__ == "__main__":
    main()
