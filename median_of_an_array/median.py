def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        num_m = 0
        ind = (n // 2 + n % 2) - 1
        m = a[ind]
        for elem in a:
            if elem == m:
                num_m += 1
        print(num_m // 2 + num_m % 2)

if __name__ == "__main__":
    main()
