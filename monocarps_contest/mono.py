def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        zero_count = a.count(0)
        if zero_count < 2:
            print(-1)
        else:
            num_ones_at_edges = a[0] + a[-1]
            print(num_ones_at_edges)
    
    
if __name__ == "__main__":
    main()
