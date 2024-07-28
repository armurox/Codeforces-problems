def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        x = input()
        s = input()
        num_moves = 0
        done = False
        while (len(x) <= m):
            if s in x:
                print(num_moves)
                done = True
                break
            x += x
            num_moves += 1
            if s in x:
                print(num_moves)
                done = True
                break
        if not done:
            if s in x:
                print(num_moves)
            else:
                x += x
                num_moves += 1
                if s in x:
                    print(num_moves)
                else:
                    print(-1)
    
if __name__ == "__main__":
    main()
