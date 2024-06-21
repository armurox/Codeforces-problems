def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        num_pref = 0
        for i in range(1, n + 1):
            max_arr = max(a[:i])
            if sum(a[:i]) - max_arr == max_arr:
                num_pref += 1
        print(num_pref)
                    
    
if __name__ == "__main__":
    main()
