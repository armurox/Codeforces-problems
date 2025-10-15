def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = set(map(int, input().split()))
        print((2 * len(a)) - 1)
    
    
if __name__ == "__main__":
    main()
