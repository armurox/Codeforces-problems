def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        ans = 0
        num_ones = 0
        num_twos = 0
        for elem in a:
            if elem == 0:
                ans += 1
            elif elem == 1:
                num_ones += 1
            else:
                num_twos += 1
        min_num_ones_twos = min(num_ones, num_twos)
        ans += min_num_ones_twos
        num_ones -= min_num_ones_twos
        num_twos -= min_num_ones_twos
        ans += num_twos // 3 + num_ones // 3
        print(ans)
    
    
if __name__ == "__main__":
    main()

