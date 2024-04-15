from string import ascii_lowercase
def main():
    hash_map = {}
    count = 1
    for elem in ascii_lowercase:
        hash_map[elem] = count
        count += 1
    t = int(input())
    for _ in range(t):
        s = input()
        size = len(s)
        if size == 1:
            print('Bob', hash_map[s[0]])
        elif size % 2:
            print('Alice', end=" ")
            total = 0
            min_val = hash_map[s[-1]]
            for elem in s[:-1]:
                total += hash_map[elem]
            if hash_map[s[0]] < min_val:
                total = 0
                min_val = hash_map[s[0]]
                for elem in s[1:]:
                    total += hash_map[elem]
            print(total - min_val)
        else:
            total = 0
            for elem in s:
                total += hash_map[elem]
            print('Alice', total)
    
if __name__ == "__main__":
    main()
