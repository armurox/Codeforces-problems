def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        a_set = a.copy()
        for i in range(n):
            not_found = True
            for j in range(n):
                if i == j:
                    continue
                if abs(a[i] - a_set[j]) % k == 0:
                    not_found = False
                    break
            if not_found:
                print('YES', i + 1, sep='\n')
                break
        if not not_found:
            print('NO')
            

if __name__ == "__main__":
    main()
