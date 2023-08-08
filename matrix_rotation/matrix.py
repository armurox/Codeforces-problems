def main():
    case_num = int(input())
    for _ in range(case_num):
        x_1, x_2 = input().split()
        x_3, x_4 = input().split()
        x_1 = int(x_1)
        x_2 = int(x_2)
        x_3 = int(x_3)
        x_4 = int(x_4)
        if ((((x_1 < x_2 and x_3 < x_4) or (x_1 > x_2 and x_3 > x_4)) and ((x_1 < x_3 and x_2 < x_4) or (x_1 > x_3 and x_2 > x_4)))):
            print("YES")
        else:
            print("NO")
    
    
if __name__ == "__main__":
    main()