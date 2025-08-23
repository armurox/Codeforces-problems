def main():
    t = int(input())
    for _ in range(t):
        a, x, y = map(int, input().split())
        if (a < x and a < y) or (a > x and a > y):
            print("YES")
        else:
            print("NO")

    
if __name__ == "__main__":
    main()
