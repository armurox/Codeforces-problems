def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        parity = False
        ans = []
        for i in reversed(range(n)):
            if a[i] > 0 and not parity:
                a[i] = -a[i]
                parity = not parity
                ans.append(i + 1)
            elif a[i] < 0 and parity:
                a[i] = -a[i]
                parity = not parity
                ans.append(i + 1)
        print(len(ans))
        for elem in ans:
            print(elem, end=" ")
        print()
    
    
if __name__ == "__main__":
    main()
