def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        min_val = 1
        max_val = n
        list_to_reverse = []
        is_max = True
        while (min_val <= max_val):
            if is_max:
                is_max = False
                list_to_reverse.append(max_val)
                max_val -= 1
            else:
                is_max = True
                list_to_reverse.append(min_val)
                min_val += 1
        for elem in reversed(list_to_reverse):
            print(elem, end=' ')
        print()


if __name__ == "__main__":
    main()
