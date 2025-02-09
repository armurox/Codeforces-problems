def main():
    t = int(input())
    for _ in range(t):
        n, m, k = map(int, input().split())
        for i in reversed(range(m + 1, n + 1)):
            print(i, end=" ")
        for i in range(1, m + 1):
            print(i, end=" ")
        print()
    
    
if __name__ == "__main__":
    main()
