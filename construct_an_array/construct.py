def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        start = 1
        for _ in range(n):
            print(start, end=" ")
            start += 2
        print()
    
    
if __name__ == "__main__":
    main()

