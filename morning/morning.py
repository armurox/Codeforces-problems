def main():
    t = int(input())
    for _ in range(t):
        n = list(map(int, list(input())))
        num_moves = n[0]
        if n[0] == 0:
            num_moves = 10
        for i in range(len(n) - 1):
            if n[i] == 0 and n[i + 1] != 0:
                num_moves += abs(10 - n[i + 1]) + 1
                continue
            elif n[i] == 0 and n[i + 1] == 0:
                num_moves += 1
                continue
            elif n[i + 1] == 0:
                num_moves += abs(10 - n[i]) + 1
                continue
            num_moves += abs(n[i] - n[i + 1]) + 1
        print(num_moves)
    
    
if __name__ == "__main__":
    main()
