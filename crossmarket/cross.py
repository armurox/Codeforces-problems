def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        if n == m == 1:
            print(0)
        elif m < n:
            print(2*m + n - 2)
        else:
            print(2*n + m - 2)
    
if __name__ == "__main__":
    main()