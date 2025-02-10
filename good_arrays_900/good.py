def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        sum_ones = 0
        sum_nones = 0
        for i in range(n):
            if a[i] == 1:
                sum_ones += 1
            else:
                sum_nones += a[i] - 1
        if n == 1 or sum_nones <= sum_ones:
            print('NO')
        else:
            print('YES')
    
    
if __name__ == "__main__":
    main()
