def main():
    t = int(input())
    for _ in range(t):
        s = input()
        t = input()
        s = ''.join(sorted(s))
        if t == 'abc' and 'b' in s and 'c' in s and 'a' in s:
            b_i = s.index('b')
            c_i = s.index('c')
            c_ri = s.rfind('c')
            s = s[:b_i] + 'c' * s.count('c') + s[b_i:c_i] + s[c_ri + 1:]
        print(s)
    
    
if __name__ == "__main__":
    main()
