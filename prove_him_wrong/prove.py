def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n > 19:
            print("NO")
            continue
        print("YES")
        a = []
        a.append(1)
        for i in range(1, n):
            a.append(a[i - 1] * 3)
        for elem in a:
            print(elem, end=" ")
        print()
        
    
    
if __name__ == "__main__":
    main()
