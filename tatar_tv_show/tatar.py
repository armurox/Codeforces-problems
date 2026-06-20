def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        s = input()
        # count number of ones
        num_ones = 0
        for elem in s:
            if elem == '1':
                num_ones += 1
        if num_ones % 2:
            print('NO')
            continue
        if num_ones == 0:
            print('YES')
            continue
        if k == n:
            print('NO')
            continue
        if k == 1:
            print('YES')
            continue
        for i in range(n // 2):
            try:
                if s[i] != s[i + k]:
                    print('NO')
                    break
            except IndexError:
                if s[i] == 1:
                    print('NO')
                    break
        else:
            print('YES')

    
if __name__ == '__main__':
    main()
