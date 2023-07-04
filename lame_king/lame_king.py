def main():
    case_num = int(input())
    for _ in range(case_num):
        a, b = input().split()
        a  = int(a)
        b = int(b)
        if abs(a) > abs(b):
            num_secs = 2 * abs(a) - 1
        elif abs(b) > abs(a):
            num_secs =  2 * abs(b) - 1
        else:
            num_secs = 2 * abs(a)
        print(num_secs)
    
    
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()