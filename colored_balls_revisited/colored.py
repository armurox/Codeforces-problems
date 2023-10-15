def main():
    cn = int(input())
    for _ in range(cn):
        n = int(input())
        nums = list(map(int, input().split()))
        print(nums.index(max(nums)) + 1)
    
    
if __name__ == "__main__":
    main()
