def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        p_mems = set(i for i in range(1, k + 1))
        p = list(map(int, input().split()))
        num_moves = 0
        for i in range(k):
            if p[i] not in p_mems:
                num_moves += 1
        print(num_moves)
            
            
    
    
if __name__=="__main__":
    main()
