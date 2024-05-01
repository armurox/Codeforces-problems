def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        _sum = 0
        for i in range(n - 1):
            first_ans = abs(a[i] - a[i + 1])
            second_ans = abs(a[i] - b[i + 1])
            third_ans = abs(b[i] - a[i + 1])
            fourth_ans = abs(b[i] - b[i + 1])
            if second_ans + third_ans < first_ans + fourth_ans:
                _sum += second_ans
                a[i + 1], b[i + 1] = b[i + 1], a[i + 1]
                _sum += abs(b[i] - b[i + 1])
            else:
                _sum += first_ans
                _sum += abs(b[i] - b[i + 1])
        print(_sum)
    
if __name__ == "__main__":
    main()
