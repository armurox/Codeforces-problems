def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(input().split())
        num_ones = a.count('1')
        num_zeroes = a.count('0')
        if num_ones % 2:
            print(1, min(num_ones, num_zeroes))
        else:
            print(0, min(num_ones, num_zeroes))


if __name__ == "__main__":
    main()

