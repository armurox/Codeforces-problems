def main():
    case_num = int(input())
    for _ in range(case_num):
        n, m = input().split()
        n = int(n)
        m = int(m)
        x_1, y_1, x_2, y_2 = input().split()
        x_1 = int(x_1)
        y_1 = int(y_1)
        x_2 = int(x_2)
        y_2 = int(y_2)
        if x_1 != 1 and x_1 != n and y_1 != 1 and y_1 != m and x_2 != 1 and x_2 != n and y_2 != 1 and y_2 != m:
            print(4)
        elif ((x_1 == 1 and (y_1 == 1 or y_1 == m)) or (x_1 == n) and (y_1 == 1 or y_1 == m) or ((x_2 == 1 and (y_2 == 1 or y_2 == m)) or (x_2 == n) and (y_2 == 1 or y_2== m))):
            print(2) 
        else:
            print(3)
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()