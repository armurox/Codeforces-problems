def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        print(1 if (a == b and b == 1) else b - a)
    
    
if __name__ == "__main__":
    main()
