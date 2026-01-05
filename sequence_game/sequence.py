def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        x = int(input())
        found_less = False
        found_greater = False
        for elem in a:
            if elem >= x:
                found_greater = True
            if elem <= x:
                found_less = True
        print('YES' if found_greater and found_less else 'NO')


if __name__ == "__main__":
    main()
