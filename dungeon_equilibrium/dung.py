def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        hash_map = {}
        min_num_to_remove = 0
        for elem in a:
            if elem in hash_map:
                hash_map[elem] += 1
            else:
                hash_map[elem] = 1
        for elem in a:
            if hash_map[elem] == 0:
                continue
            if hash_map[elem] < elem:
                min_num_to_remove += hash_map[elem]
                hash_map[elem] = 0
            elif hash_map[elem] > elem:
                min_num_to_remove += (hash_map[elem] - elem)
                hash_map[elem] = 0
        print(min_num_to_remove)
                

if __name__ == '__main__':
    main()
