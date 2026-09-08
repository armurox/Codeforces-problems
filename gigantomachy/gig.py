def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        sum_a = 0
        sum_b = 0
        for i in range(len(a) - 1):
            sum_a += (a[i] - a[i + 1]) + 1
        for i in range(len(b) - 1):
            sum_b += (b[i] - b[i + 1]) + 1
        sum_a += a[len(a) - 1]
        sum_b += b[len(b) - 1]
        print(2 if sum_b > sum_a else 1)
    
    
if __name__ == "__main__":
    main()
