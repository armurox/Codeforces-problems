def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        min_val = a + b
        for i in range(a, b + 1):
            min_val = min((i - a + b - i), min_val)
        print(min_val)
    
if __name__ == "__main__":
    main()
