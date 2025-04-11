def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        is_one = False
        num_moves = 0
        for elem in s:
            if elem == "1" and not is_one:
                num_moves += 1
                is_one = True
            elif elem == "0" and is_one:
                num_moves += 1
                is_one = False
        print(num_moves)
        

if __name__ == "__main__":
    main()
