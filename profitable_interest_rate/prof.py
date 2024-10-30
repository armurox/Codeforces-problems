def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        if a >= b:
            print(a)
        elif 2 * a >= b:
            print(2 * a - b)
        else:
            print(0)
    
    
if __name__ == "__main__":
    main()
