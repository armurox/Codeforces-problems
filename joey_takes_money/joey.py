def main():
    cn = int(input())
    for _ in range(cn):
        n = int(input())
        sum = 1
        nums = list(map(int, input().split()))
        for num in nums:
            sum *= num
        sum += n - 1
        print(2022 * sum)
    
    
if __name__ == "__main__":
    main()
