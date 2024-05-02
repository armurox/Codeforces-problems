def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        max_val = max(a)
        a.pop(a.index(max_val))
        if len(a) == 0:
            print('YES') if max_val == 1 else print('NO')
            continue
        second_max_val = max(a)
        print('NO') if max_val - second_max_val > 1 else print('YES')

if __name__ == "__main__":
    main()
