def main():
    n = int(input())
    a = set(list(map(int, input().split())))
    count = 0
    for elem in a:
        if elem == 0:
            continue
        count += 1
    print(count)


if __name__ == "__main__":
    main()
