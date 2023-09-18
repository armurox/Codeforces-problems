def main():
    cn = int(input())
    for _ in range(cn):
        n = int(input())
        arr_1 = list(map(int, input().split()))
        arr_2 = list(map(int, input().split()))
        num_1_ones = 0
        num_2_ones = 0
        invalid = False
        
        for num in arr_1:
            if num == 1:
                num_1_ones += 1
                
        for num in arr_2:
            if num == 1:
                num_2_ones += 1
                
        diff = 0  
        while num_1_ones > num_2_ones:
            for i in range(n):
                if arr_1[i] != arr_2[i] and arr_1[i] == 1:
                    arr_1[i] = 0
                    num_1_ones -= 1
                    diff += 1
                    break
                
        while num_2_ones > num_1_ones:
            for i in range(n):
                if arr_1[i] != arr_2[i] and arr_1[i] == 0:
                    arr_1[i] = 1
                    num_2_ones -= 1
                    diff += 1
                    break
                
        for i in range(n):
            if arr_1[i] != arr_2[i]:
                invalid = True
                break
            
        if invalid:
            print(diff + 1)
        else:
            print(diff)
            
    
    
if __name__ == "__main__":
    main()
