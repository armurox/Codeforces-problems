def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        if (a % 2 == 0 and b % 2 == 0) or (a % 2 == 0 and a // 2 != b) or (b % 2 == 0 and b // 2 != a):
            print("YES")
        else:
            print("NO")
    
    
if __name__ == "__main__":
    main()
