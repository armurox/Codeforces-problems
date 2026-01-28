def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        ans = 0
        while n // 3 > 0:
            ans += n // 3
            n = n // 3 + n % 3
        print(ans)
    
    
if __name__ == "__main__":
    main()
