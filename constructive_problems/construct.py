def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        print(a if a > b else b)
    
    
if __name__ == "__main__":
    main()
