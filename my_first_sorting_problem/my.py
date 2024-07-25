def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        print(min(a, b), max(a, b))
    
    

if __name__ == "__main__":
    main()
