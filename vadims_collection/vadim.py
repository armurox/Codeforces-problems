def main():
    t = int(input())
    for _ in range(t):
        s = input()
        hash_map = {}
        for elem in s:
            if elem in hash_map:
                hash_map[elem] += 1
            else:
                hash_map[elem] = 1
        new = []
        for i in range(1, 11):
            _break = False
            if str(10 - i) in hash_map and hash_map[str(10 - i)] > 0:
                hash_map[str(10 - i)] -= 1
                new.append(str(10 - i))
                continue
            for j in range(10 - (i - 1), 10):
                if _break is True:
                    continue
                if str(j) in hash_map and hash_map[str(j)] > 0:
                    new.append(str(j))
                    hash_map[str(j)] -= 1
                    _break = True
        print(''.join(new))
    
    
if __name__ == "__main__":
    main()
