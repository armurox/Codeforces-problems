def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        hash_map = {}
        for _ in range(n):
            a = list(map(int, input().split()))
            for elem in a:
                if elem in hash_map:
                    hash_map[elem] += 1
                else:
                    hash_map[elem] = 1
        if max(hash_map.values()) > n * n // 2:
            print('NO')
        else:
            print('YES')
    
    
if __name__ == "__main__":
    main()
