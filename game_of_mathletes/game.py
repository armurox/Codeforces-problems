def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        a_map = {}
        score = 0
        for elem in a:
            if elem in a_map:
                score += 1
                a_map[elem] -= 1
                if a_map[elem] == 0:
                    del a_map[elem]
            else:
                if k - elem in a_map:
                    a_map[k - elem] += 1
                else:
                    a_map[k - elem] = 1
        print(score)
    
    
if __name__ == '__main__':
    main()
