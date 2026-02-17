def main():
    t = int(input())
    for _ in range(t):
        n, h, l = map(int, input().split())
        a = list(map(int, input().split()))
        a.sort()
        if n % 2 == 1:
            n -= 1
        num_pairs = 0
        i = 0
        j = n - 1
        min_hl = min(h, l)
        max_hl = max(h, l)
        while (i < n // 2 and j > n // 2 - 1):
            if a[i] <= min_hl and a[j] <= max_hl:
                num_pairs += 1
            else:
                j -= 1
                continue
            i += 1
            j -= 1
        print(num_pairs)
            
    
if __name__ == "__main__":
    main()


