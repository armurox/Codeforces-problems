def main():
    t = int(input())
    for _ in range(t):
        s = input()
        c = input()
        no = True
        size = len(s)
        if size % 2:   
            for i in range(size):
                if s[i] == c:
                    try:
                        if len(s[i+1:]) % 2 == 0 or len(s[:i]) % 2 == 0:
                            print("YES")
                            no = False
                            break
                    except IndexError:
                        pass
                
        if no:
            print("NO")

if __name__ == "__main__":
    main()
