def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = input()
        found_letter_before = False
        yes = True
        prev = a[0]
        for elem in a:
            if elem.isdigit() and not found_letter_before and elem >= prev:
                prev = elem
                continue
            elif (not elem.isdigit() and elem >= prev and found_letter_before) or (not elem.isdigit() and not found_letter_before):
                found_letter_before = True
                prev = elem
                continue
            else:
                yes = False
                print("NO")
                break
        if yes:
            print("YES")


if __name__ == "__main__":
    main()
