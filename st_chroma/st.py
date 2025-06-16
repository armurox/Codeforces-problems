def main():
    t = int(input())
    for _ in range(t):
        x, n = map(int, input().split())
        for i in range(n):
            print(i, end=' ')
        for i in range(n + 1, x):
            print(i, end=' ')
        if n < x:
            print(n)
        else:
            print()
    
    
if __name__ == "__main__":
    main()
