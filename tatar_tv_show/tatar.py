def main():
    t = int(input())
    for x in range(t):
        n, k = map(int, input().split())
        s = list(input())
        for i in range(n - 1):
            try:
                if s[i] == '1':
                    s[i] = '0'
                    s[i + k] = '1' if s[i + k] == '0' else '0'
            except IndexError:
                s[i] = '1'
                print('NO')
                break
        else:
            for elem in s:
                if elem == '1':
                    print('NO')
                    break
            else:
                print('YES')
        

    
if __name__ == '__main__':
    main()
