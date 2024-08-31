def main():
    t = int(input())
    for _ in range(t):
        n, m, k = map(int, input().split())
        min_val = min(n, m)
        max_val = max(n, m)
        num_colors = 0
        if k > min_val:
            for i in range(min_val):
                num_colors += (2 * i) + 1
            for i in range(min_val, min(k, max_val)):
                num_colors += min_val
        else:
            for i in range(k):
                num_colors += (2 * i) + 1
        print(num_colors)
            
    
    
if __name__ == "__main__":
    main()

