def main():
    t = int(input())
    for _ in range(t):
        s = input()
        count = 0
        hash_map = {}
        for elem in s:
            if elem not in hash_map:
                hash_map[elem] = 1
            else:
                hash_map[elem] += 1
        for elem in s:
            if hash_map[elem] == 1:
                break
            hash_map[elem] -= 1
            count += 1
        print(s[count:])
 
    
if __name__ == "__main__":
    main()
