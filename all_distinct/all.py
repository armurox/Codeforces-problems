def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        ans = len(set(input().split()))
        diff = (n - ans)
        if diff % 2:
            print(ans - 1)
        else:
            print(ans)
    
if __name__ == "__main__":
    main()
