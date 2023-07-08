def main():
    case_num: int = int(input())
    for _ in range(case_num):
        n, k = input().split()
        n = int(n)
        k = int(k)
        later_acts = input().split()
        later_acts = [eval(i) for i in later_acts]
        num_filled = 0
        count = 1
        num_kicked = {}
        recent_acts = {}
        for i, val in enumerate(later_acts):
            if val not in recent_acts:
                recent_acts[val] = 1
                num_kicked[i + 1] = n - count
                num_filled += 1
            if num_filled == n:
                break
            count += 1
        
        for _ in range(n - num_filled):
            print(-1, end = " ")
        
        for i in reversed(num_kicked):
            print(i, end = " ")
        print()
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()