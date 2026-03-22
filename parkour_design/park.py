def main():
    t = int(input())
    for _ in range(t):
        x, y = map(int, input().split())
        if y < 0:
            actual_x = (-y) * 4
            print('YES' if ((x - actual_x) % 3 == 0 and x - actual_x >= 0) else 'NO')
        elif y > 0:
            actual_x = (y) * 2
            print('YES' if ((x - actual_x) % 3 == 0 and x - actual_x >= 0) else 'NO')
        else:
            actual_x = 0
            print('YES' if ((x - actual_x) % 3 == 0 and x - actual_x >= 0) else 'NO')
    
    
if __name__ == "__main__":
    main()
