def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        s = input()
        print(1) if (k == 0 or s == s[::-1]) else print(2)
    
    
if __name__ == "__main__":
    main()
