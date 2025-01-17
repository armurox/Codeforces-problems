def main():
    t = int(input())
    for _ in range(t):
        x, y, k = map(int, input().split())
        prev = x + 1
        if prev == y:
            prev = x + 2
        if k % 2:
            for i in range(k):
                if i == 0:
                    print(x, y)
                elif i == 1:
                    if x != 0 and y != 0:
                        print(0, 0)
                    else:
                        print()
                elif i % 2 == 0:
                    print(prev, prev)
                    prev = -prev
                else:
                    print(prev, prev)
                    prev = (-prev) + 1
        else:
            for i in range(k):
                if i == 0:
                    print(x, y)
                elif i % 2:
                    print(prev, prev)
                    prev = -prev
                else:
                    print(prev, prev)
                    prev = (-prev) + 1
                    
    
if __name__ == "__main__":
    main()
