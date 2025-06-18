def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        for _ in range(k):
            print('1', end='')
        for _ in range(n - k):
            print('0', end='')
        print()
    

if __name__ == "__main__":
    main()
