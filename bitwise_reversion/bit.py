def main():
    t = int(input())
    for _ in range(t):
        x, y, z = map(int, input().split())
        if x == y == z or not (x % 2 == 0 and y % 2 == 0 and z % 2 == 0):
            print("YES")
        else:
            print("NO")
    
    
if __name__ == "__main__":
    main()
