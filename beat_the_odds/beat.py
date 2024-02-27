def main():
    t = int(input())
    for _ in range(t):
        n = input()
        nums = list(map(int, input().split()))
        num_odd = 0
        num_even = 0
        for elem in nums:
            if elem % 2:
                num_odd += 1
            else:
                num_even += 1
        print(min(num_odd, num_even))
    

if __name__ == "__main__":
    main()
