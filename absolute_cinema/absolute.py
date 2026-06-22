def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        for i in range(n):
            if a[i] > b[i]:
                temp = a[i]
                a[i] = b[i]
                b[i] = temp
        print(max(a) + sum(b))
    
    
if __name__ == "__main__":
    main()
