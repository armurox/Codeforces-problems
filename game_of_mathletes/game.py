def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        a_set = set()
        score = 0
        for elem in a:
            if elem in a_set:
                score += 1
                a_set.remove(elem)
                # print(elem, k - elem)
            else:
                a_set.add(k - elem)
        print(score)
    
    
if __name__ == '__main__':
    main()
