def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        seen = {}
        if n % 2:
            print("NO")
            continue
        k = (a[0] + a[1]) // 2
        seen[a[0]] = a[1]
        for i in range(0, n, 2):
            if i == 0:
                if a[i] < a[i + 1]:
                    print("NO")
                    break
            if a[i] == a[i + 1]:
                print("NO")
                break
            if a[i] == k or k == a[i + 1] or (k < a[i] and k < a[i + 1]) or (k > a[i] and k > a[i + 1]):
                k = (a[i] + a[i + 1]) // 2
            seen[a[i]] = a[i + 1]
        for elem in seen:
            if elem < k < seen[elem] or seen[elem] < k < elem:
                continue
            else:
                print("NO")
                break    
        else:
            print("YES")          
            
    
    
if __name__ == "__main__":
    main()
