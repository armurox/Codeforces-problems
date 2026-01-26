def main():
    t = int(input())
    for _ in range(t):
        l, a, b = map(int, input().split())
        if b == 1:
            print(l - 1)
        else:
            max_val = 0
            for i in range(1, max(l // b + 2, 3)):
                max_val = max(max_val, (a + (i * b)) % l)
            print(max_val)
    
    
if __name__ == "__main__":
    main()

