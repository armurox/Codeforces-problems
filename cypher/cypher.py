def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        nums = list(map(int, input().split()))
        ans = []
        for i in range(n):
            temp, s = input().split()
            for char in s[::-1]:
                if char == "D":
                    nums[i] = (nums[i] + 1) % 10
                else:
                    nums[i] = (nums[i] - 1) % 10
        for num in nums:
            print(num, end=" ")
        print()

if __name__ == "__main__":
    main()
