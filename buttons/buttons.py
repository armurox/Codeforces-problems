def main():
    case_num = int(input())
    for _ in range(case_num):
        a, b, c = input().split()
        a = int(a)
        b = int(b)
        c = int(c)
        if a > b:
            print("First")
        elif b > a:
            print("Second")
        elif c % 2:
            print("First")
        else:
            print("Second")
    
    
if __name__ == "__main__":
    main()