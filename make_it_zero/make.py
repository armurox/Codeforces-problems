def main():
    cn = int(input())
    for _ in range(cn):
        n = int(input())
        ig = input()
        if n % 2:
            print(4)
            print(1, n - 1)
            print(1, n - 1)
            print(n - 1, n)
            print(n - 1, n)
        else:
            print(2)
            print(1, n)
            print(1, n)
    
if __name__ == "__main__":
    main()
