def main():
    t = int(input())
    for _ in range(t):
        k = int(input())
        a = list(map(int, input().split()))
        hash_map = {}
        target = k - 2
        for i in range(k):
            if a[i] in hash_map:
                result = [hash_map[a[i]], i - 1]
            elif not target % a[i]:
                hash_map[target // a[i]] = i
        result = [a.pop(result[0]), a.pop(result[1])]
        print(result[0], result[1])
    

if __name__ == "__main__":
    main()
