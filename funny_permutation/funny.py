def main():
    cn = int(input())
    for _ in range(cn):
        n = int(input())
        if n > 3:
            print(n - 1, n, end = "")
            for i in range(1, n - 1):
                print("", i, end = "")
            print()
        elif n == 3:
            print(-1)
        else:
            print(2, 1)
    
    
if __name__ == "__main__":
    main()