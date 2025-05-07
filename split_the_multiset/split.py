def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        if n == 1:
            print(0)
        elif n <= k:
            print(1)
        else:
            result = 1 + ((n - k) // (k - 1))
            result += 1 if ((n - k) % (k - 1)) else 0
            print(result)
    
    
if __name__ == "__main__":
    main()
