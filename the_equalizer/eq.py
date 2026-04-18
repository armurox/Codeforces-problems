def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        sum_a = sum(a)
        if (((n * sum_a) % 2 == 1) or (((n * sum_a) % 2 == 0) and ((n * k) % 2 == 0))):
            print('YES')
        else:
            print('NO')
    
    
if __name__ == "__main__":
    main()
