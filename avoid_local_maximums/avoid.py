def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        num_moves = 0
        if len(a) == 2:
            print(1)
            print(a[0], a[1])
        else:
            for i in range(1, n - 1):
                if a[i - 1] < a[i] > a[i + 1]:
                    num_moves += 1
                    a[i] = a[i + 1]
            print(num_moves)
            for elem in a:
                print(elem, end=" ")
            print()
    
    
if __name__ == "__main__":
    main()
