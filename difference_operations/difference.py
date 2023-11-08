def main():
    t = int(input())
    for _ in range(t):
        yes = True
        n = int(input())
        nums = list(map(int, input().split()))
        for i in range(1, n):
            if nums[i] % nums[0] != 0:
                yes = False
                print("NO")
                break
        if yes:
            print("YES")
                
            
    
    
if __name__ == "__main__":
    main()
