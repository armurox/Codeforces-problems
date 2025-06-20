def main():
    t = int(input())
    for _ in range(t):
        n, x = map(int, input().split())
        s = list(map(int, input().split()))
        first_one_index = 0
        last_one_index = 0
        found_first = False
        for i in range(len(s)):
            if s[i] == 1 and not found_first:
                found_first = True
                first_one_index = i
            elif s[i] == 1:
                last_one_index = i
        print('YES' if ((last_one_index - first_one_index) + 1 <= x) else 'NO')
    
    
if __name__ == "__main__":
    main()
