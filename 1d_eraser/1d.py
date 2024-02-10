def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        s = input()
        i = 0
        num_moves = 0
        while (i < n):
            if s[i] == "B":
                num_moves += 1
                i += k - 1
            i += 1
        print(num_moves)
                
    
    
if __name__ == "__main__":
    main()
