def main():
    case_num = int(input())
    for _ in range(case_num):
        n = int(input())
        nums = list(map(int, input().split()))
        max_val = max(nums)
        min_val = min(nums)
        for element in nums:
            max_val |= element
            min_val &= element
        print(max_val - min_val)
    
    
if __name__ == "__main__":
    main()