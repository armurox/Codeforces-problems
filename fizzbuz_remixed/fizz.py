def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n > 2:
            print((n // 15) * (n % 3 + 1) + 3)
        else:
            print(n + 1)
    
    
if __name__ == "__main__":
    main()
