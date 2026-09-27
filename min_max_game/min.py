def main():
    t = int(input())
    for _ in range(t):
        input()
        a = list(map(int, input().split()))
        num_zeros = 0
        num_ones = 0
        for elem in a:
            if elem == 1:
                num_ones += 1
            else:
                num_zeros += 1
        if num_ones >= num_zeros:
            print('Bessie')
        else:
            print('Elsie')
    
    
if __name__ == "__main__":
    main()
