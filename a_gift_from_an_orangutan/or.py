def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        print((n - 1) * (max(a) - min(a)))
    
    
if __name__ == "__main__":
    main()
