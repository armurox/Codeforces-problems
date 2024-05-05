def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        hash_map = {}
        max_pol = 0
        for elem in a:
            if elem not in hash_map:
                hash_map[elem] = 1
            else:
                hash_map[elem] += 1
                if hash_map[elem] % 3 == 0:
                    max_pol += 1
        print(max_pol)
    

if __name__ == "__main__":
    main()
