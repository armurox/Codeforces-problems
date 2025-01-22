def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a_set = set(a)
        used_set = set()
        hash_map = {}
        result = 0
        for elem in a:
            if elem in hash_map:
                hash_map[elem] += 1
            else:
                hash_map[elem] = 1
        for elem in hash_map:
            if hash_map[elem] == 1:
                result += 1
                used_set.add(elem)
        result = result // 2 + result % 2
        result *= 2
        print(result + len(list(a_set.difference(used_set))))
    
    
if __name__ == "__main__":
    main()
