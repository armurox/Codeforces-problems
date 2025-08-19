def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        if (n > 2 or m > 2) and (m != 1 and n != 1):
            print('YES')
        else:
            print('NO')
    
    
if __name__ == "__main__":
    main()
