def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        l = [elem for elem in range(1, n + 1)]
        a = []
        for c in s[::-1]:
            if c == '>':
                a.insert(0, l.pop())
            else:
                a.insert(0, l.pop(0))
        a.insert(0, l.pop())
        for elem in a:
            print(elem, end=" ")
        print()
                

if __name__ == "__main__":
    main()
