def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        temp_a = a.copy()
        for i in range(n):
            temp_a[i] = min(a[i], b[i])
            b[i] = max(a[i], b[i])
        print(max(temp_a) * max(b))
    
    
if __name__ == "__main__":
    main()

