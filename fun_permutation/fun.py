def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        hash_map = {}
        for elem in a:
            if elem % 3 == 0:
                print(elem, end=" ")
            else:
                if elem in hash_map:
                    print(hash_map[elem], end=' ')
                else:
                    print(3 - elem % 3, end=' ')
                    hash_map[3 - elem % 3] = elem
        print()
    
    
if __name__ == "__main__":
    main()
