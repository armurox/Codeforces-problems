def main():
    case_num = int(input())
    moves = []
    for _ in range(case_num):
        num_candies = int(input())
        if num_candies % 2 == 0:
            print(-1)
            continue
        x = 1
        num_moves = 0
        while 2 * x + 1 < num_candies:
            x = 2 * x + 1
            num_moves +=1
            moves.append(2)
        
        
            
                
            
    
    
    
    
    
if __name__ = "main":
    main()