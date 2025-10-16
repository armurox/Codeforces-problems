def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        nums = list(map(int, input().split()))
        if nums[0] != 1:
            print("NO")
        else:
            print("YES")
    
    
if __name__ == "__main__":
    main()

