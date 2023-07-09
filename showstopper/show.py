def main():
    case_num = int(input())
    for _ in range(case_num):
        size = int(input())
        a = input().split()
        a = [eval(i) for i in a]
        b = input().split()
        b = [eval(i) for i in b]
        max_a = max(a[:size - 1])
        max_b = max(b[:size - 1])
        if (b[size - 1] >= max_b and b[size - 1] >= max_a):
            print("Yes")
        elif (a[size - 1] >= max_b and a[size - 1] >= max_a):
            print("Yes")
        else:
            print("No")
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()