def main():
    t = int(input())
    for _ in range(t):
        input()
        a = list(input())
        input()
        b = list(input())
        c = input()
        for i in range(len(c)):
            a.append(b[i]) if c[i] == 'D' else a.insert(0, b[i])
        print(''.join(a))
    
    
if __name__ == "__main__":
    main()
