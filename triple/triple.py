def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        hash_map = {}
        no = True
        for elem in a:
            if elem not in hash_map:
                hash_map[elem] = 1
            else:
                hash_map[elem] += 1
                if hash_map[elem] >= 3:
                    print(elem, end=" ")
                    no = False
                    break
        print(-1) if no else print()
    
    
if __name__ == "__main__":
    main()
