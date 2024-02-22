def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        nums = []
        for _ in range(n):
            nums.append(list(map(int, input().split())))
        max_num = nums[0][0]
        row_index = 0
        column_index = 0
        for i in range(n):
            for j in range(m):
                val = nums[i][j]
                if val > max_num:
                    max_num = val
                    row_index = i
                    column_index = j
        print(max(row_index + 1, n - row_index) * max(column_index + 1, m - column_index))
        
    
    
if __name__ == "__main__":
    main()
