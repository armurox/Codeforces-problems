def main():
    t = int(input())
    for _ in range(t):
        a, b, c = list(map(int, input().split()))
        print(min(abs(a - b) + abs(a - c), abs(b - a) + abs(b - c), abs(a - c) + abs(b - c)))
    
    
if __name__ == "__main__":
    main()
