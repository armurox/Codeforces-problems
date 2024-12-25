def main():
    t = int(input())
    for _ in range(t):
        s = input()
        if s[0] < s[2]: 
            print(s[0] + '<' + s[2])
        elif s[0] > s[2]:
            print(s[0] + '>' + s[2])
        elif s[0] == s[2]:
            print(s[0] + '=' + s[2])
    

if __name__ == "__main__":
    main()
