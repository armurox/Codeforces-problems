def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        hash_map = {}
        increase_count = False
        prev = s[0]
        hash_map[prev] = 1
        count = 1
        for elem in s[1:]:
            if elem in hash_map and s[0] != elem and s[n - 1] != s[0]:
                increase_count = True
            else:
                hash_map[elem] = 1
            if elem != prev:
                count += 1
                prev = elem
        try:
            if s[n - 1] != s[0] and s[1] == s[0]:
                increase_count = True
        except IndexError:
            pass
        ans = count + 1 if increase_count else count
        print(ans)
 
 
if __name__ == '__main__':
    main()

