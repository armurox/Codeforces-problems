def main():
    t = int(input())
    for _ in range(t):
        a, b, c = map(int, input().split())    
        if (a + b + c) % 3 != 0:
            print("NO")
            continue
        x = (a + b + c) // 3
        print("YES" if b <= x else "NO")
    
    
if __name__ == "__main__":
    main()
