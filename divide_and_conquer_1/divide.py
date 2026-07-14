def main():
    t = int(input())
    for _ in range(t):
        x, y = map(int, input().split())
        print("YES" if x % y == 0 else "NO")
    
    
if __name__ == "__main__":
    main()

