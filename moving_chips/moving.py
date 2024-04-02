def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        num_zeros = []
        in_bet_zeros = 0
        ones_started = False
        for i in range(n):
            if a[i] == 0 and ones_started:
                in_bet_zeros += 1
            elif a[i] == 1 and in_bet_zeros:
                num_zeros.append(in_bet_zeros)
                in_bet_zeros = 0
            elif a[i] == 1:
                ones_started = True
        print(sum(num_zeros))
    
if __name__ == "__main__":
    main()
