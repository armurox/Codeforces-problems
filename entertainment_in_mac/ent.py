def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        no_swap = False
        swap = False
        size = len(s)
        if s == s[::-1]:
            print(s)
            continue
        for i in range(size // 2):
            if (n % 2 == 0 and s[i] < s[size - 1 - i]) or (n % 2 and s[i] > s[size - 1 - i]):
                no_swap = True
                break
            elif (n % 2 == 0 and s[i] > s[size - 1 - i]) or (n % 2 and s[i] < s[size - 1 - i]):
                swap = True
                break
        if not no_swap or swap:
            if n % 2 == 0:
                s = s[::-1] + s
            else:
                s += s[::-1]
        print(s)
                
    
    
if __name__ == "__main__":
    main()
