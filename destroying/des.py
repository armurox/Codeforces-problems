def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        curr_min = a[0]
        for i in range(1, n):
            if a[i] < curr_min:
                curr_min = a[i]
            else:
                a[i] = curr_min
        print(sum(a))
    
    
if __name__ == "__main__":
    main()
