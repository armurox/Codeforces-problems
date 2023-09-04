def main():
    case_num = int(input())
    for _ in range(case_num):
        n = int(input())
        nums = list(map(int, input().split()))
        num_moves = 0
        temp = nums.copy()
        nums.sort()
        for i in range(n):
            if temp[i] != nums[i]:
                num_moves += 1
        print(num_moves // 2)
    

if __name__ == "__main__":
    main()
