def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        x, y = map(int, input().split())
        num_to_divide = min(x, y)
        print(n // num_to_divide + (1 if n % num_to_divide else 0))
    

if __name__ == "__main__":
    main()
