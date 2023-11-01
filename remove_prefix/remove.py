def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        nums = list(map(int, input().split()))
        longest_suff = 0
        encountered = set()
        for i in reversed(range(n)):
            if nums[i] in encountered:
                break
            longest_suff += 1
            encountered.add(nums[i])
        print(n - longest_suff)
    
if __name__ == "__main__":
    main()
