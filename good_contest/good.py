def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        print(n - min(a))
    
    
if __name__ == "__main__":
    main()
