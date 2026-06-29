def main():
    t = int(input())
    for _ in range(t):
        x, y = map(int, input().split())
        print("NO" if y // x == 2 else "YES")
    
    
if __name__ == "__main__":
    main()
