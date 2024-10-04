def main():
    t = int(input())
    for _ in range(t):
        ans = 0
        n, k = map(int, input().split())
        if k == 1:
            print(n)
        else:
            while n:
                ans += n % k
                n //= k
            print(ans)
                
    
    
if __name__ == "__main__":
    main()
