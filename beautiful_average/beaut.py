def main():
    t = int(input())
    for _ in range(t):
        n = input()
        print(max(list(map(int, input().split()))))


if __name__ == '__main__':
    main()
