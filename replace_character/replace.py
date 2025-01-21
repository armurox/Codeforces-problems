def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        hash_map_s = {}
        for elem in s:
            if elem in hash_map_s:
                hash_map_s[elem] += 1
            else:
                hash_map_s[elem] = 1
        values = hash_map_s.values()
        max_val = max(values)
        min_val = min(values)
        max_key = list(filter(lambda a: hash_map_s[a] == max_val, hash_map_s))[-1]
        min_key = list(filter(lambda a: hash_map_s[a] == min_val, hash_map_s))[0]
        temp_s = list(s)
        for i in range(n):
            if temp_s[i] == min_key:
                temp_s[i] = max_key
                break
        s = "".join(temp_s)
        print(s)

    
if __name__ == '__main__':
    main()
