def main():
    case_num = int(input())
    for _ in range(case_num):
        size = int(input())
        arr = input().split()
        min_moves = 0
        arr_sum = 0
        num_negs = 0
        for i in range(size):
            arr[i] = int(arr[i])
            arr_sum += arr[i]
            if arr[i] == -1:
                num_negs += 1
        while num_negs % 2 != 0 or arr_sum < 0:
            num_negs -= 1
            arr_sum += 2
            min_moves += 1
        print(min_moves)
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()