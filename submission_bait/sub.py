def main():
    t = int(input())
    for _ in range(t):
        n = input()
        nums = list(map(int, input().split()))
        without_repeats = list(set(nums))
        without_repeats.sort()
        yes = False
        for elem in without_repeats:
            if nums.count(elem) % 2:
                yes = True
                print('YES')
                break
        if not yes:
            print('NO')
    
    
if __name__ == "__main__":
    main()
