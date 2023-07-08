def main():
    case_num: int = int(input())
    for _ in range(case_num):
        n, k = input().split()
        n = int(n)
        k = int(k)
        later_acts = input().split()
        later_acts = [eval(i) for i in later_acts]
        num_filled = 0
        num_moves = 0
        num_moves_for_removed = []
        recent_acts = {}
        for val in later_acts:
            if val in recent_acts:
                recent_acts[val] += 1
                num_moves += 1          
            else:
                recent_acts[val] = 1
                num_filled += 1
                num_moves += 1
                num_moves_for_removed.append(num_moves)
            if num_filled == n:
                break
        
        for _ in range(n - num_filled):
            print(-1, end = " ")
        
        for i in reversed(num_moves_for_removed):
            print(i, end = " ")
        print()
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()