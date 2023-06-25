def main():
    case_num = int(input())
    for _ in range(case_num):
        size = input()
        digits = input().split()
        digits = [eval(i) for i in digits]
        sum_even = 0
        sum_odd = 0
        for i in digits:
            if i % 2 == 0:
                sum_even += i
            else:
                sum_odd += i
        if sum_even > sum_odd:
            print("YES")
        else:
            print("NO")
        
            
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()