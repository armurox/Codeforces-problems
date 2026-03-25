def main():
    t = int(input())
    for _ in range(t):
        n, w = map(int, input().split())
        print(n - (n // w) if w != 1 else 0)
    
    
if __name__ == "__main__":
    main()
