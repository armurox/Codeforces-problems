def main():
    t = int(input())
    for _ in range(t):
        n, s = map(int, input().split())
        x = list(map(int, input().split()))
        min_x = min(x)
        max_x = max(x)
        print(min(abs(max_x - s), abs(min_x - s)) + (max_x - min_x))
    
    
if __name__ == "__main__":
    main()
