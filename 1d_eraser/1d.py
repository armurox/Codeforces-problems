def main():
    cn = int(input())
    for _ in range(cn):
        n, k = map(int, input().split())
        s = input()
        num_moves = 0
        strt = -1
        dst = 0
        for i in range(n):
            if s[i] == 'B' and strt == -1:
                strt = i
                dst = 0
            elif s[i] == 'B' and strt != -1:
                dst = i - strt
                if dst <= k:
                    num_moves += 1
                else:
                    num_moves += 2
                strt = -1
        if strt != -1:
            num_moves += 1
        print(num_moves)
    
if __name__ == "__main__":
    main()