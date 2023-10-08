def main():
    n = int(input())
    nums = list(map(int, input().split()))
    for i in range(n):
        nums[i] = abs(nums[i])
    print(min(nums))
    

if __name__ == "__main__":
    main()
