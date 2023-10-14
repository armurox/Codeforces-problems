def main():
    cn = int(input())
    for _ in range(cn):
        n = int(input())
        if (n % 2 == 0):
            for i in range(n - 2):
                print(n - 2 - i, end = " ")
            print(n - 1, n)
        else:
            print(1, end = " ")
            for i in range(n - 3):
                print(n - 2 - i, end = " ")
            print(n - 1, n)
                  
    
    
if __name__ == "__main__":
    main()
