def main():
    case_num = int(input())
    for _ in range(case_num):
        n = int(input())
        nums = list(map(int, input().split()))
        pos_sum = 0
        neg_sum = 0
        for num in nums:
            if num > 0:
                pos_sum += num
            elif num < 0:
                neg_sum += -num
        print(abs(pos_sum - neg_sum))


if __name__ == "__main__":
    main()
