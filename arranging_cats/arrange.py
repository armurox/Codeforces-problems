def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        f = input()
        nta = 0
        ntr = 0
        for i in range(n):
            if s[i] == "1" and f[i] == "0":
                ntr += 1
            elif s[i] == "0" and f[i] == "1":
                nta += 1
        print(ntr if ntr > nta else nta)
        
    
if __name__ == "__main__":
    main()
