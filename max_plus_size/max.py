def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        even = []
        odd = []
        if len(a) == 1:
            print(a[0] + 1)
            continue
        for elem in a[::2]:
            even.append(elem)
        for elem in a[1::2]:
            odd.append(elem)
        print(max(max(even) + len(even), max(odd) + len(odd)))


if __name__ == "__main__":
    main()
