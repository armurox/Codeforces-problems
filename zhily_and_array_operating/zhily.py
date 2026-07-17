def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        num_positive = 0
        positive_sum = 0
        for elem in a[::-1]:
            if elem > 0 or positive_sum > abs(elem):
                positive_sum += elem
                num_positive += 1
            else:
                positive_sum = 0
        print(num_positive)


if __name__ == "__main__":
    main()
