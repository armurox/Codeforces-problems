def main():
    case_num = int(input())
    for _ in range(case_num):
        a,b,c = input().split()
        a = int(a)
        b = int(b)
        c = int(c)
        if a + b == c:
            print("+")
        else:
            print("-")
            
            
            
        
if __name__ == "__main__":
    main()