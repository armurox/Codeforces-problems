def main():
    case_num = int(input())
    for _ in range(case_num):
        size = int(input())
        nums = input().split()
        nums = [eval(i) for i in nums]
        cost = 0
        while len(nums) > 1:
            max_num = max(nums)
            min_num = min(nums)
            cost += max_num - min_num
            nums.remove(max_num)
            nums.remove(min_num)
        print(cost)
    
    
    
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()