def main():
    case_num = int(input())
    for _ in range(case_num):
        a, b, c, d = input().split()
        num_moves = 0
        a = int(a)
        b = int(b)
        c = int(c)
        d = int(d)
        if b > d:
            print(-1)
            continue
        
        num_moves = d - b
        a = a + num_moves
        if a < c:
            print(-1)
            continue
        
        num_moves += (a - c)

        print(num_moves)
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()