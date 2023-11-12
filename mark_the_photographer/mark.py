def main():
    t = int(input())
    for _ in range(t):
        yes = True
        n, d = map(int, input().split())
        p = list(map(int, input().split()))
        p.sort()
        for i in range(n):
            if p[n + i] - p[i] < d:
                yes = False
                print("NO")
                break
        if yes:
            print("YES")
    
if __name__ == "__main__":
    main()
