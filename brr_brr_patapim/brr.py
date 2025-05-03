def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = [list(map(int, input().split())) for _ in range(n)]
        result = [elem[0] for elem in a] + [elem for elem in a[-1][1:]]
        result.insert(0, ((2 * n) * ((2 * n) + 1)) // 2  - sum(result))
        for elem in result:
            print(elem, end=" ")
        print()
    
    
if __name__ == "__main__":
    main()
