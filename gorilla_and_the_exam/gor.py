def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        a_size = len(set(a))
        hash_map = {}
        for elem in a:
            if elem in hash_map:
                hash_map[elem] += 1
            else:
                hash_map[elem] = 1
        
        for elem in sorted(hash_map, key=lambda a: hash_map[a]):
            if k == 0:
                break
            if hash_map[elem] <= k:
                k -= hash_map[elem]
                hash_map[elem] = 0
        for elem in hash_map:
            if hash_map[elem] == 0:
                a_size -= 1
        print(max(a_size, 1))
    
    
if __name__ == '__main__':
    main()
