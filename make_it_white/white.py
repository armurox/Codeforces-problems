def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        found_first = False
        first = 0
        last = 1
        for i in range(n):
            if s[i] == 'B' and found_first:
                last = i
            elif s[i] == 'B':
                found_first = True
                first = i - 1
                last = i
        print(last - first)
    
    
if __name__ == "__main__":
    main()
