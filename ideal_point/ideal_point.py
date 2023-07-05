def main():
    case_num: int = int(input())
    for _ in range(case_num):
        n, k = input().split()
        n = int(n)
        k = int(k)
        start_count = 0
        end_count = 0
        yes = 0
        for _ in range(n):
            start, end = input().split()
            start = int(start)
            end = int(end)
            if start == k:
                start_count += 1
            if end == k:
                end_count += 1
        if start_count > 0 and end_count > 0:
            print("YES")
        else:
            print("NO")
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()