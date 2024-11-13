def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        a = input()
        b = input()
        hash_map = {}
        for elem in b:
            if elem in hash_map:
                hash_map[elem] += 1
            else:
                hash_map[elem] = 1
        for i in reversed(range(n + 1)):
            k = 0
            temp_hash = hash_map.copy()
            found = True
            for j in range(i):
                k += 1
                if a[j] in temp_hash:
                    temp_hash[a[j]] -= 1
                else:
                    found = False
                    break
            for elem in temp_hash:
                if temp_hash[elem] < 0:
                    found = False
                    break
            if found:
                print(k)
                break
        if not found:
            print(0)
                
    
    
if __name__ == "__main__":
    main()
