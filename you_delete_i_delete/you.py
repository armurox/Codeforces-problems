def main():
    t = int(input())
    for _ in range(t):
        s = list(input())
        for i in range(len(s)):
            if s[i] == "0":
                s.pop(i)
                break
        for i in range(len(s)):
            if s[i] == "1":
                s.pop(i)
                break
        print("".join(s))
    

if __name__ == "__main__":
    main()
