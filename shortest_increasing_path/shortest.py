def main():
    t = int(input())
    for _ in range(t):
        x, y = map(int, input().split())
        if y > x:
            print(2)
        elif x - y < 2 or y == 1:
            print(-1)
        else:
            print(3)
    
    
    
if __name__ == '__main__':
    main()
