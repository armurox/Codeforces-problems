def main():
    s = 'abcdefghijklmnopqrstuvwxyz'
    t = int(input())
    for _ in range(t):
        hash_map = {}
        n = input()
        a = list(map(int, input().split()))
        new_s = []
        for elem in a:
            for char in s:
                if elem == 0 and char not in hash_map:
                    hash_map[char] = 0
                    new_s.append(char)
                    break
                elif elem != 0 and char in hash_map and elem == hash_map[char] + 1:
                    hash_map[char] += 1
                    new_s.append(char)
                    break
        print(''.join(new_s))
    
    
if __name__ == "__main__":
    main()
