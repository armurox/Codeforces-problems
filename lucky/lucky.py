def main():
    t = int(input())
    for _ in range(t):
        a = list(map(int, input()))
        if sum(a[:3]) == sum(a[3:]):
            print("YES")
        else:
            print("NO")
    
    
if __name__ == "__main__":
    main()
