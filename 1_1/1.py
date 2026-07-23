def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = list(map(int, list(input())))
        max_ans = 0
        for i in range(1, n - 1):
            if s[i - 1] == 1 and s[i + 1] == 1:
                s[i] = 1
        for elem in s:
            if elem == 1:
                max_ans += 1
        min_ans = 0
        for i in range(1, n - 1):
            if s[i - 1] == 1 and s[i + 1] == 1:
                s[i] = 0
        for elem in s:
            if elem == 1:
                min_ans += 1
        print(min_ans, max_ans)
    
    
if __name__ == "__main__":
    main()
