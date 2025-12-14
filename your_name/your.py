def main():
    q = int(input())
    for _ in range(q):
        input()
        s, t = input().split()
        hash_s = {}
        for elem in s:
            if elem in hash_s:
                hash_s[elem] += 1
            else:
                hash_s[elem] = 1
        hash_t = {}
        for elem in t:
            if elem in hash_t:
                hash_t[elem] += 1
            else:
                hash_t[elem] = 1
        print("YES" if hash_s == hash_t else "NO")

    
if __name__ == "__main__":
    main()
