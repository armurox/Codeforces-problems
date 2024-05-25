def main():
    t = int(input())
    for _ in range(t):
        n, s = map(int, input().split())
        print(s // (n * n))
        
    
    
if __name__ == "__main__":
    main()
