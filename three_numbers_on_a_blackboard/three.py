def main():
    t = int(input())
    for _ in range(t):
        a = list(map(int, input().split()))
        a.sort()
        print(min(a[2], a[0] + a[1]) - a[0])
    
    
if __name__ == "__main__":
    main()
