def main():
    case_num = int(input())
    for _ in range(case_num):
        size = int(input())
        digits = input().split()
        digits = [int(i) for i in digits]
        num_ones = 0
        num_one_spells = 0
        count = 0
        for digit in digits:
            if digit == 1:
                num_ones += 1
                count = 1

            if num_ones % 2 == 0 and count == 1:
                num_one_spells += 1
                count = 0
                
        num_spells = size - num_one_spells
        print(num_spells)
    
    
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()