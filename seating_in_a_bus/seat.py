def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        a_s = set()
        a_s.add(a[0])
        yes = True
        for elem in a[1:]:
            if elem - 1 not in a_s and elem + 1 not in a_s:
                yes = False
                print("NO")
                break
            else:
                a_s.add(elem)
        if yes:
            print("YES")

    
if __name__ == "__main__":
    main()
