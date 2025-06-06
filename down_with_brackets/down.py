def main():
    t = int(input())
    for _ in range(t):
        s = input()
        balance = 0
        printed = False
        for elem in s[1:-1]:
            if elem == '(':
                balance += 1
            else:
                balance -= 1
            if balance < 0:
                print('YES')
                printed = True
                break
        if not printed:
            print('YES' if balance != 0 else 'NO')
    
if __name__ == "__main__":
    main()
