def main():
    t = int(input())
    for _ in range(t):
        n, a, b = map(int, input().split())
        print("YES" if abs(a - b) % 2 == 0 else "NO")
        
    
if __name__ == "__main__":
    main()
