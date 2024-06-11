def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        s = 'R'
        for i in range(1, n):
            if a[i] != a[i - 1]:
                s += 'B'
                index = i - 1
            else:
                s+= 'R'
        if 'BB' not in s and 'B' in s:
            s = s[:index] + 'B' + s[index + 1:]
            
        print("YES\n" + s if 'B' in s else "NO")
                
    
    
if __name__ == "__main__":
    main()
