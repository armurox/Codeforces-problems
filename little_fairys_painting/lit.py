def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        initial = len(set(a))
        a.sort()
        for elem in a:
            if elem >= initial:
                print(elem)
                break


if __name__ == "__main__":
    main()

