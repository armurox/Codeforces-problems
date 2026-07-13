def main():
    t = int(input())
    for _ in range(t):
        k = int(input())
        a = list(map(int, input().split()))
        num_threes = 0
        num_twos = 0
        for elem in a:
            if elem >= 3:
                num_threes += 1
                break
            elif elem == 2:
                num_twos += 1
        if num_threes or num_twos > 1:
            print('YES')
        else:
            print('NO')
    
    
if __name__ == "__main__":
    main()
