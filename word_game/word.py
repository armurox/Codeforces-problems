def main():
    cn = int(input())
    for _ in range(cn):
        n = int(input())
        num1 = set(input().split())
        num2 = set(input().split())
        num3 = set(input().split())
        p1 = 0
        p2 = 0
        p3 = 0
        for element in num1:
            if element not in num2 and element not in num3:
                p1 += 3
            elif element not in num2 or element not in num3:
                p1 += 1
            else:
                continue
        for element in num2:
            if element not in num1 and element not in num3:
                p2 += 3
            elif element not in num1 or element not in num3:
                p2 += 1
            else:
                continue
        for element in num3:
            if element not in num2 and element not in num1:
                p3 += 3
            elif element not in num2 or element not in num1:
                p3 += 1
            else:
                continue
        print(p1, p2, p3)
            
    
    
if __name__ == "__main__":
    main()
