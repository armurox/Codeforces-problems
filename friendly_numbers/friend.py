def main():
    t = int(input())
    for _ in range(t):
        string_n = input()
        n = int(string_n)
        pow = len(string_n) if (string_n[0] == '9' or len(string_n) < 3) else len(string_n) - 1
        # print('test', (((10**pow) * ((n // (10**pow)) + 1)) - (9 * pow), pow, n))
        res = str(((10**pow) * ((n // (10**pow)) + 1)))
        if n % 9 == 0 and (n < (((10**pow) * ((n // (10**pow)) + 1)) - (9 * pow)) or n == ((10**pow) * ((n // (10**pow)) + 1)) - int(res[0])):
            print(10)
        else:
            print(0)
    

if __name__ == "__main__":
    main()
