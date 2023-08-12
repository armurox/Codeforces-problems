def main():
    case_num = int(input())
    for _ in range(case_num):
        blank = input()
        x1, y1 = input().split()
        x2, y2 = input().split()
        x3, y3 = input().split()
        x1 = int(x1)
        y1 = int(y1)
        x2 = int(x2)
        y2 = int(y2)
        x3 = int(x3)
        y3 = int(y3)
        # Same line check
        if ((x1 == x2 and (y2 == y3 or y1 == y3)) or (y1 == y2 and (x2 == x3 or x1 == x3)) or (x1 == x3 and (y2 == y3 or y1 == y2)) or (y1 == y3 and (x2 == x3 or x1 == x2))):
            print("NO")

        else:
            print("YES")
        
    
if __name__ == "__main__":
    main()