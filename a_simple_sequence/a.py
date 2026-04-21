def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        for elem in reversed(range(1, n + 1)):
            print(elem, end=" ")
        print()
    
    
if __name__ == "__main__":
    main()

