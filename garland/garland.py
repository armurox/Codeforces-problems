def main():
    case_num = int(input())
    for _ in range(case_num):
        digits = input()
        for i in digits:
            i = int(i)
        num_moves = 0
        prev = -1
        num_to_do = 0
        if check_list(digits):
            print(-1)
            continue
        for i in digits:
            if i != prev:
                num_moves += 1
            else:
                num_to_do += 1
            prev = i
        if num_to_do % 2 == 0:
            num_moves += 2 * num_to_do
        else:
            num_moves += (2 * num_to_do) + 1
        print(num_moves)
    
    
    
    
    
def check_list(arr):
    ele = arr[0]
    chk = True
    for elem in arr:
        if ele != elem:
            chk = False
    return chk
        
    
    
    
    
if __name__ == "__main__":
    main()