def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        num_ones = s.count('1')
        num_zeros = s.count('0')
        print(num_ones * (num_ones - 1) + (num_ones + 1) * (num_zeros))
    

if __name__ == '__main__':
    main()
