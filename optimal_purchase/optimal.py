def main():
    t = int(input())
    for _ in range(t):
        n, a, b = map(int, input().split())
        x = [(n // 3 * b) + (1 if (n % 3) else 0) * b, (n // 3 * b) + ((n % 3) * a), n * a]
        print(min(x))
        

if __name__ == "__main__":
    main()

