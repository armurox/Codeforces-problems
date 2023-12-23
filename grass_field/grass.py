def main():
    t = int(input())
    for _ in range(t):
        row_1 = input().split()
        row_2 = input().split()
        num_ones = 0
        num_ones += row_1.count("1") + row_2.count("1")
        if (num_ones == 4):
            print(2)
        elif (num_ones > 0):
            print(1)
        else:
            print(0)
    
if __name__ == "__main__":
    main()
