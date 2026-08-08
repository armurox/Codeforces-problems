def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        s = input()
        if n // k < 2:
            print(-1)
        else:
            ans = 0
            num_first_rs = 0
            num_last_ls = 0
            for elem in s:
                if elem == 'R' and num_first_rs < k:
                    num_first_rs += 1
                elif elem == 'L' and num_first_rs < k:
                    ans += 1
                    num_first_rs += 1
            for i in reversed(range(len(s))):
                if s[i] == 'L' and num_last_ls < k:
                    num_last_ls += 1
                elif s[i] == 'R' and num_last_ls < k:
                    ans += 1
                    num_last_ls += 1
            print(ans)

    
if __name__ == "__main__":
    main()
