def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        found = False
        index = 0
        for i in range(32):
            if (2 ** i) == n:
                found = True
                print(n)
                break
            elif (2 ** i) > n:
                index = i - 1
                break
        if not found:
            print(2 ** index)
    
if __name__ == "__main__":
    main()
