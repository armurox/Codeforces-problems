def main():
    case_num: int = int(input())
    for _ in range(case_num):
        n, k = input().split()
        n = int(n)
        k = int(k)
        later_acts = input().split()
        later_acts = [eval(i) for i in later_acts]
        num_repeats = 0
        num_moves = 0
        num_filled = 0
        num_kicked = []
        recent_acts = []
        for i in later_acts:
            if i not in recent_acts and num_filled < n:
                recent_acts.append(i)
                num_moves += 1
                num_kicked.append(num_moves)
                num_filled += 1
            else:
                num_moves += 1
                
        for _ in range(n - num_filled):
            num_kicked.append(-1)
        
        for i in reversed(num_kicked):
            print(i, end = " ")
        print()
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()