def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        index = False
        for i in range(n // 2 + 1):
            if s[i] < s[-(i + 1)]:
                index = True
                break
        if index:
            for _ in range(n):
                s += s[::-1]
        else:
            for i in range(n):
                if i == 0:
                    s = s[::-1]
                else:
                    s += s
        print(s)
    
    
if __name__ == "__main__":
    main()
