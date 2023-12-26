def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        nums = list(map(int, input().split()))
        num_negs = 0
        for num in nums:
            if num < 0:
                num_negs += 1
        if 0 in nums or num_negs % 2:
            print(0)
        else:
            print(1)
            print(1, 0)
        
    
if __name__ == "__main__":
    main()
