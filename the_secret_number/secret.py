def main():
    t = int(input())
    for _ in range(t):
        n = input()
        num_zeros = n.count('0')
        size = len(n)
        num_unique = size - num_zeros
        no_zeros = set()
        for elem in n:
            no_zeros.add(elem)
        if num_unique % 2 == 1 or len(no_zeros) > 1:
            print(0)
        elif num_zeros > 0:
            print(1)
            print(n[0])
        elif num_unique < 8 or num_unique % 6 != 0:
            print(2)
            print(n[0] * (num_unique // 2), end=" ")
            for _ in range(num_unique // 2 - 1):
                print(n[0], end='')
                print(0, end='')
            print(n[0])
        else:
            print(3)
            print(n[0] * (num_unique // 2), end=" ")
            for _ in range(num_unique // 2 - 1):
                print(n[0], end='')
                print(0, end='')
            print(n[0])
            
            
    
    
if __name__ == "__main__":
    main()
