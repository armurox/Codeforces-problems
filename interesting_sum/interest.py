def main():
   cn = int(input())
   for _ in range(cn):
        n = int(input())
        nums = list(map(int, input().split()))
        _max = max(nums)
        _min = min(nums)
        _sum = _max - _min
        nums.remove(_max)
        nums.remove(_min)
        _sum += (max(nums) - min(nums))
        print(_sum)
    
    
if __name__ == "__main__":
    main()
