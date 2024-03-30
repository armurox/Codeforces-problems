def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a.sort()
        max_score = 0
        for i in range(2*n):
            if i % 2 == 0:
                max_score += a[i]
        print(max_score)
    
    
if __name__ == "__main__":
    main()
