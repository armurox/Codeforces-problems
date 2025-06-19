def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        print(1, end=' ')
        for i in range(3, n + 1):
            print(i, end=' ')
        print(2)
        
    
    
if __name__ == "__main__":
    main()
