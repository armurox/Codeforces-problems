def main():
    t = int(input())
    for _ in range(t):
        s = input()
        can_split = False
        for i in range(1, len(s)):
            if s[i] == "0":
                continue
            elif (int(s[:i]) < int(s[i:])):
                can_split = True
                print(s[:i], s[i:])
                break
        if not can_split:
            print(-1)
    
    
if __name__ == "__main__":
    main()
