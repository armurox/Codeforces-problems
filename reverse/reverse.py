def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        for j in range(n):
            if a[j] != j + 1:
                i = a.index(j + 1)
                a = a[:j] + a[j:i + 1][::-1] + a[i + 1:]
                break
        for elem in a:
            print(elem, end=" ")
        print()
        
    
    
if __name__ == "__main__":
    main()
