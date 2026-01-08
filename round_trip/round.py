def main():
    t = int(input())
    for _ in range(t):
        r, x, d, n = map(int, input().split())
        s = input()
        if r < x:
            print(n)
        else:
            max_num_rounds = 0
            for elem in s:
                if r - x >= 0 and elem == "2":
                    continue
                elif elem == '1':
                    max_num_rounds += 1
                    r -= d
                else:
                    max_num_rounds += 1
            print(max_num_rounds)
    
    
if __name__ == "__main__":
    main()
