def main():
    case_num = int(input())
    pi = "314159265358979323846264338327"
    for _ in range(case_num):
        digits = input()
        num_valid = 0
        for i in range(len(digits)):
            if (digits[i] != pi[i]):
                break
            num_valid += 1
        print(num_valid)
        
    
    
    
    
    
    
    
    
    
    
    
    
    
if __name__=="__main__":
    main()