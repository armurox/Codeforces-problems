def main():
    t = int(input())
    for _ in range(t):
        num = [int(c) for c in input()]
        non_zero_num = [elem for elem in num if elem != 0]
        min_cost = min(non_zero_num)
        min_removals = len(num) - 1
        num_zeros = 0
        num_non_zeros = 0
        for i in range(len(num)):
            if num[i] == 0:
                num_zeros += 1
            else:
                removals = len(num[i + 1:]) + num_non_zeros
                cost = num[i] // (num_zeros + 1)
                if cost < min_cost:
                    min_cost = cost
                    min_removals = removals
                elif cost == min_cost and removals <= min_removals:
                    min_cost = cost
                    min_removals = removals
                num_non_zeros += 1
        print(min_removals)
    
    
if __name__ == "__main__":
    main()
