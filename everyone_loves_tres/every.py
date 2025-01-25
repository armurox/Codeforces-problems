def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n == 1 or n == 3:
            print(-1)
        elif n % 2:
            for _ in range(n - 5):
                print(3, end="")
            print(36366)
        else:
            for _ in range(n - 2):
                print(3, end="")
            print(66)
            
    
    
if __name__ == "__main__":
    main()

