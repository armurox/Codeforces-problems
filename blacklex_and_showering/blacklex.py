def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        max_diff = 0
        total_diff_sum = 0
        index_to_remove = 0
        for i in range(n - 1):
            if (curr_diff := abs(a[i] - a[i + 1])) > max_diff:
                max_diff = curr_diff
                index_to_remove = i if a[i] > a[i + 1] else i + 1
                if i != n - 2 and abs(a[i + 1] - a[i + 2]) < max_diff:
                    index_to_remove = i
                    
        a.pop(index_to_remove)
        for i in range(n - 2):
            total_diff_sum += abs(a[i] - a[i + 1])
        print(total_diff_sum)
    
    
if __name__ == "__main__":
    main()
