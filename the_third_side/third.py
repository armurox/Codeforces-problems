def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a.sort()
        for i in range(n - 1):
            a[i + 1] = a[i] + a[i + 1] - 1
        print(a[n - 1])
        
    
if __name__ == "__main__":
    main()
