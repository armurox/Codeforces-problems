def main():
    t = int(input())
    for _ in range(t):
        a, b, c, d = map(int, input().split())
        print("YES" if a == b == c == d else "NO")
    
    
if __name__ == "__main__":
    main()
