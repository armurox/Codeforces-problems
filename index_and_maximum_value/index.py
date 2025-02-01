def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        a = list(map(int, input().split()))
        curr_max = max(a)
        max_vals = []
        for _ in range(m):
            c, l, r = input().split()
            l = int(l)
            r = int(r)
            if curr_max > r:
                max_vals.append(curr_max)
                continue
            for i in range(n):
                if c == '+' and l <= a[i] <= r:
                    a[i] += 1
                elif c == '-' and l <= a[i] <= r:
                    a[i] -= 1
                curr_max = max(a)
            max_vals.append(curr_max)
        for elem in max_vals:
            print(elem, end=" ")
        print()
    
    
if __name__ == "__main__":
    main()

