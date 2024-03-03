def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        nums = list(map(int, input().split()))
        num_moves = 0
        num_even = 0
        min_bits = max(nums)
        for i in range(n):
            if nums[i] % 2 == 0:
                num_even += 1
                bits = list(str(bin(nums[i])))
                num_bits = 0
                for elem in bits[::-1]:
                    if elem == '1':
                        break
                    else:
                        num_bits += 1
                if num_bits < min_bits:
                    min_bits = num_bits
        if num_even == n:
            num_moves = (num_even - 1) + min_bits
        else:
            num_moves += num_even
        print(num_moves)
    
if __name__ == "__main__":
    main()
