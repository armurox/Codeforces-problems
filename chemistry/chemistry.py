def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        s = input()
        s_u = set(s)
        c_s = {}
        for c in s:
            if c in c_s:
                c_s[c] += 1
            else:
                c_s[c] = 1
        num_moves = 0
        for c in c_s:
            if c_s[c] % 2:
                c_s[c] -= 1
                num_moves += 1
        if num_moves > k + 1:
            print("NO")
        else:
            print("YES")
        
    
if __name__ == "__main__":
    main()
