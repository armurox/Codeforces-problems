def main():
    case_num = int(input())
    for _ in range(case_num):
        game = []
        for _ in range(3):
            game.append(input())
        win = False
        for i in range(3):
            # Check columns
            if (game[0][i] == game[1][i] == game[2][i] and game[1][i] != '.'):
                win = True
                print(game[0][i])
                break
            # Check rows
            elif (game[i][0] == game[i][1] == game[i][2] and game[i][1] != '.'):
                win = True
                print(game[i][0])
                break
        # Check diagonals
        if (((game[0][0] == game[1][1] == game[2][2] and game[1][1] != '.') or (game[0][2] == game[1][1] == game[2][0] and game[1][1] != '.')) and win == False):
            win = True
            print(game[1][1])
        
        if win == False:
            print("DRAW")
                
    
    
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()