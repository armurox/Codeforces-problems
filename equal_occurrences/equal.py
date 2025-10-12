def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        num_le = 1
        curr_count = 0
        max_balanced = 1
        prev = a[0]
        for elem in a[1:]:
            if elem != prev:
                max_balanced = max(curr_count * num_le, max_balanced)
                num_le += 1
                curr_count = 0
                prev = elem
            else:
                curr_count += 1
    
    
if __name__ == '__main__':
    main()

