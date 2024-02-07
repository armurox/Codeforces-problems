def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if 1 <= n <= 6 or n == 9:
            print("NO")
        elif n % 3:
            print("YES")
            print(1, 2, n - 3)
        else:
            print("YES")
            print(1, 4, n - 5)
    
    
if __name__ == "__main__":
    main()
