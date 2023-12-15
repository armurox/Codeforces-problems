def main():
    n = int(input())
    s = input()
    yes = False
    for i in range(1, n):
        if (s[:i].count("L") != s[i:].count("L") and s[:i].count("O") != s[i:].count("O")):
            print(i)
            yes = True
            break
    if not yes:
        print(-1)
    
    
if __name__ == "__main__":
    main()
