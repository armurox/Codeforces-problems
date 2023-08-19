def main():
    case_num = int(input())
    for _ in range(case_num):
        b, c, h = input().split()
        b = int(b)
        c = int(c)
        h = int(h)
        if b <= c + h:
            print(2 * b - 1)
        else:
            print(2 *(c + h) + 1)
    
    
if __name__ == "__main__":
    main()
