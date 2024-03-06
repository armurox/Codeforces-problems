def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        div = n - 1
        nums = list(map(int, input().split()))
        sum_nums = sum(nums)
        no = True
        for elem in nums:
            if (sum_nums - elem) / div == elem:
                print("YES")
                no = False
                break
        if no:
            print("NO")
    
    
    
if __name__ == "__main__":
    main()
