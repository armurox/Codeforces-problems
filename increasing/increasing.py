def main():
    cn = int(input())
    for _ in range(cn):
        n = int(input())
        nums = list(map(int, input().split()))
        no_dups = set(nums)
        yes = True
        for num in no_dups:
            if nums.count(num) > 1:
                print("NO")
                yes = False
                break
        if yes:
            print("YES")
                
    
    
if __name__ == "__main__":
    main()
