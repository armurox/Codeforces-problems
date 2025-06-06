def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a.sort()
        right_count = 0
        left_count = 0
        for i in range(n // 2):
            if a[0] % 2 != a[n - 1 - i] % 2:
                right_count += 1
            else:
                break
        for i in range(n // 2):
            if a[i] % 2 != a[n - 1] % 2:
               left_count += 1
            else:
               break
        print(min(left_count, right_count))
    

if __name__ == "__main__":
    main()
