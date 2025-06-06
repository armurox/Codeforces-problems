def main():
    t = int(input())
    for _ in range(t):
        s = input()
        found_close = False
        found_open_after_close = False
        for i in range(len(s)):
            if s[i] == ')':
                found_close = True
            if found_close and s[i] == '(':
                found_open_after_close = True
        if found_open_after_close:
            print('YES')
        else:
            print('NO')
    
    
if __name__ == "__main__":
    main()
