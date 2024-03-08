def main():
    t = int(input())
    for _ in range(t):
        n = list(input())
        nums = [int(i) for i in n]
        if len(n) == 2:
            print(n[1])
        else:
            print(min(nums))
    
    
if __name__ == "__main__":
    main()
