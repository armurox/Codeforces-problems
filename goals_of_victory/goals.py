def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        nums = map(int, input().split())
        print(-sum(nums))
            
    
    
if __name__ == "__main__":
    main()
