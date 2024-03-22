def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a.sort()
        print(abs(a[0] - a[-1]) + abs(a[0] - a[-2]) + abs(a[1] - a[-1]) + abs(a[1] - a[-2]))
    
    
if __name__ == "__main__":
    main()
