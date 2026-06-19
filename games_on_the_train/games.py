def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        h = list(map(int, input().split()))
        print((max(h) - min(h)) + 1)
        
    
if __name__ == "__main__":
    main()

