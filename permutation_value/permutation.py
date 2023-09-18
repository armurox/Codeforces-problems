def main():
    cn = int(input())
    for _ in range(cn):
        n = int(input())
        print(1, end = " ")
        for j in reversed(range(2, n + 1)):
            print(j, end = " ")
        print()
    
    
if __name__ == "__main__":
    main()
    