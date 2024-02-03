def main():
    t = int(input())
    for _ in range(t):
        a, b, c = map(int, input().split())
        if a == b:
            print(c)
        elif b == c:
            print(a)
        else:
            print(b)
    
    
if __name__ == "__main__":
    main()
