from string import ascii_lowercase as alc
def main():
    t = int(input())
    for _ in range(t):
        s = input()
        for i in range(8):
            val = str(i + 1)
            if val == s[1]:
                continue
            else:
                print(s[0] + val)
        for c in alc[:8]:
            if c == s[0]:
                continue
            else:
                print(c + s[1])
    
if __name__ == "__main__":
    main()
