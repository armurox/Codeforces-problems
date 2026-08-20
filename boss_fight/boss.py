def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        counts = {}
        for elem in a:
            counts[elem] = 1 + counts.get(elem, 0)
        max_elem = max(counts, key=lambda a: counts[a])
        num_others = n - counts[max_elem]
        _sum = 0
        for elem in a:
            if elem != max_elem:
                _sum += elem
        _sum += max_elem * min(counts[max_elem], num_others + 2)
        print(_sum)
    
    
if __name__ == "__main__":
    main()
