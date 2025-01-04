def main():
    t = int(input())
    for _ in range(t):
        n = input()
        started = False
        min_op = 0
        a = list(map(int, input().split()))
        for elem in a:
            if elem == 0 and started:
                min_op += 1
                started = False
            elif elem != 0 and not started:
                started = True
        if started:
            min_op += 1
        print(min_op if min_op < 2 else 2)
    
    
if __name__ == "__main__":
    main()
