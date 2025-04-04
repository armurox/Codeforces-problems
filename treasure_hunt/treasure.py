def main():
    t = int(input())
    for _ in range(t):
        x, y, a = map(int, input().split())
        print("NO" if x > (a % (x + y)) else "YES")
    
    
if __name__ == "__main__":
    main()
