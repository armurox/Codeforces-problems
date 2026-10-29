def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        print(2**(n - k + 1) + (2 * (k - 1)))
    
    
if __name__ == "__main__":
    main()
