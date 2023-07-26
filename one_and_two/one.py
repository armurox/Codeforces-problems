def main():
    case_num = int(input())
    for _ in range(case_num):
        n = int(input())
        arr = input().split()
        arrs = [eval(i) for i in arr]
        num_twos = 0
        for num in arrs:
            if num == 2:
                num_twos += 1
                
        if (num_twos % 2 == 1):
            print(-1)
        
        elif (num_twos == 0):
            print(1)
            
        else:
            nums = 0
            j = 0
            while (nums < num_twos / 2):
                if (arrs[j] == 2):
                    k = j + 1
                    nums += 1
                j += 1
            print(k)
    
    
if __name__ == "__main__":
    main()