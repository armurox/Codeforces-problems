def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n % 2 == 0:
            print(-1)
        else:
            print(n, end=" ")
            for x in range(1, n):
                print(x, end=" ")
            print()
    
    
if __name__ == "__main__":
    main()

