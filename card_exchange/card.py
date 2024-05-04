def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        hash_map = {}
        can_get_small = False
        for elem in a:
            if elem in hash_map:
                hash_map[elem] += 1
                if hash_map[elem] == k:
                    print(k - 1)
                    can_get_small = True
                    break
            else:
                hash_map[elem] = 1
        if not can_get_small:
            print(n)
        
    
if __name__ == "__main__":
    main()
