def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n == 10:
            print(-1)
        elif n % 12 == 10:
            print(22, n - 22)
        else:
            print(n % 12, n - (n % 12))
            
            
    
    
if __name__ == "__main__":
    main()

