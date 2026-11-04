def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = []
        for _ in range(n):
            a.append(list(map(int, input().split())))
        hash_map = {}
        for i in range(n):
            for j in range(n):
                if f'{j - i}' in hash_map:
                    hash_map[f'{j - i}'] = min(hash_map[f'{j - i}'], a[i][j])
                elif a[i][j] < 0:
                    hash_map[f'{j - i}'] = a[i][j]
        ans = 0
        for elem in hash_map:
            ans += hash_map[elem]
        print(-1 * ans)
                    

if __name__ == '__main__':
    main()
