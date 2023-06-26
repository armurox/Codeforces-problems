def main():
    case_num = int(input())
    for _ in range(case_num):
        n = int(input())
        if (n % 2 != 0):
            for _ in range(n):
                print(4, end = " ")
            print()
        else:
            for i in range(n):
                if i == 0:
                    print(6, end = " ")
                elif i == 1:
                    print(2, end = " ")
                else:
                    print(4, end = " ")
            print()
        
        
        
        
        
        
        
        
if __name__ == "__main__":
    main()