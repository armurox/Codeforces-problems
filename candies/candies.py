num_moves = 2
def main():
    case_num = int(input())
    for _ in range(case_num):
        num_candies = int(input())
        if num_candies % 2 == 0:
            print(-1)
            continue
        x = 3
        moves = [2]
        create_arr(x, moves, num_candies)
        print(num_moves)
        for move in moves:
            print(move, end = " ")
        print()

def create_arr(x, moves, num_candies):
    global num_moves
    if num_candies == 3:
        num_moves = 1
        return
    if num_candies == 7:
        num_moves = 2
        if x == 3:
            moves.append(2)
        return 2
    elif num_candies == 5:
        num_moves = 2
        if x == 3:
            moves.append(1)
        return 1
    if ((num_candies - 1) / 2) % 2 != 0:
        if create_arr(x + 1, moves, (num_candies - 1) / 2) != None:
            moves.append(create_arr(x + 1, moves, (num_candies - 1) / 2))
        moves.append(2)
        num_moves += 1
    elif ((num_candies + 1)/ 2) % 2 != 0:
        if create_arr(x + 1, moves, (num_candies + 1) / 2) != None:
            moves.append(create_arr(x + 1, moves, (num_candies + 1) / 2))
        moves.append(1)
        num_moves += 1
    
            
        
                
            
    
    
    
    
    
if __name__ == "__main__":
    main()