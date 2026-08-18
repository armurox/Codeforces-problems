def main():
    t = int(input())
    for _ in range(t):
        a = list(map(int, input().split()))
        if len(set(a)) != len(a):
            print(0)
        else:
            a.sort()
            print(min(a[2] - a[1], a[1] - a[0]))
    
    
if __name__ == "__main__":
    main()
