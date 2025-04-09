def main():
    t = int(input())
    for _ in range(t):
        s = input()
        prev = s[0]
        is_one = False
        for elem in s[1:]:
            if prev == elem:
                print(1)
                is_one = True
                break
            prev = elem
        if not is_one:
            print(len(s))


if __name__ == "__main__":
    main()
