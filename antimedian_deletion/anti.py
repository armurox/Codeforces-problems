def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        input()
        if n < 3:
            for _ in range(n):
                print(n, end=' ')
            print()
        else:
            for _ in range(n):
                print(2, end=' ')
            print()
    
    
if __name__ == "__main__":
    main()
