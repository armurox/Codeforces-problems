def main():
    t = int(input())
    letters = 'ABCDEFG'
    for _ in range(t):
        n, m = map(int, input().split())
        s = input()
        hash_map = {}
        num_to_add = 0
        for elem in s:
            if elem in hash_map:
                hash_map[elem] += 1
            else:
                hash_map[elem] = 1
        for elem in letters:
            if elem not in hash_map:
                num_to_add += m
                continue
            diff = m - hash_map[elem]
            if diff > 0:
                num_to_add += diff
        print(num_to_add)
    
    
if __name__ == "__main__":
    main()
