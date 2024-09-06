def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        hash_map = {}
        for elem in a:
            if elem in hash_map:
                hash_map[elem] += 1
            else:
                hash_map[elem] = 1
        print(n - hash_map[max(a, key=lambda a : hash_map[a])])
    
if __name__ == "__main__":
    main()
