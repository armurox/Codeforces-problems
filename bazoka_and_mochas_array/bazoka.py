def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        sorted_a = sorted(a)
        if a == sorted_a:
            print("YES")
            continue
        index = 0
        for i in range(n - 1):
            if a[i] > a[i + 1]:
                index = i
                break
        a = a[index + 1:] + a[:index + 1]
        if a == sorted_a:
            print("YES")
        else:
            print("NO")
    
    
if __name__ == "__main__":
    main()
