def main():
    t = int(input())
    for _ in range(t):
        num = [int(c) for c in input()]
        min_removals = len(num) - 1
        num_non_zeros = 0
        for i in range(len(num)):
            if num[i] != 0:
                removals = len(num[i + 1:]) + num_non_zeros
                if removals <= min_removals:
                    min_removals = removals
                num_non_zeros += 1
        print(min_removals)
    
    
if __name__ == "__main__":
    main()
