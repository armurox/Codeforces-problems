def main():
    t = int(input())
    for _ in range(t):
        n, j, k = map(int, input().split())
        a = list(map(int, input().split()))
        if k == 1:
            if a[j - 1] == max(a):
                print("YES")
            else:
                print("NO")
        else:
            print("YES")
    
    
if __name__ == "__main__":
    main()
