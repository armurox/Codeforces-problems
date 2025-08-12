def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        num_zeros = 0
        num_hikes = 0
        is_gap = False
        for elem in a:
            if elem == 0 and not is_gap:
                num_zeros += 1
            if elem == 1:
                num_zeros = 0
            if num_zeros == k:
                num_hikes += 1
                num_zeros = 0
                is_gap = True
                continue
            is_gap = False
        print(num_hikes)

    
if __name__ == "__main__":
    main()
