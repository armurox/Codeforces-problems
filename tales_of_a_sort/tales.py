def main():
    case_num = int(input())
    for _ in range(case_num):
        n = int(input())
        nums = input().split()
        nums = [eval(i) for i in nums]
        _max = 0
        num_moves = 0
        for j in range(n - 1):
            if nums[j] > nums[j + 1] and nums[j] > _max:
                num_moves = nums[j]
                _max = num_moves
        print(num_moves)
    
    
if __name__ == "__main__":
    main()