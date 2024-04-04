def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        u_a = set(a)
        size = len(a)
        num_zeros = 0
        for elem in a:
            if elem == 0:
                num_zeros += 1
        if num_zeros:
            print(size - num_zeros)
        elif size != len(u_a):
            print(size)
        else:
            print(size + 1)
    
if __name__ == "__main__":
    main()
