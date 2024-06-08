def main():
    s = input()
    a = []
    b = 0
    for i in range(len(s)):
        a.append((b, -i, s[i]))
        b += 1 if s[i] == "(" else -1
    a.sort()
    print("".join(x[2] for x in a))
    
    
if __name__ == "__main__":
    main()
