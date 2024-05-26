def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(input())
        a_unique = list(reversed(sorted(list(set(a)))))
        a_sort = sorted(a_unique)
        hash_map = {}
        for i in range(len(a_unique)):
            hash_map[a_unique[i]] = a_sort[i]
        ans = []
        for elem in a:
            ans.append(hash_map[elem])
        print(''.join(ans))
        

if __name__ == "__main__":
    main()
