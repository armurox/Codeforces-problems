def main():
    case_num = int(input())
    for _ in range(case_num):
        size = int(input())
        a = input().split()
        a = [eval(i) for i in a]
        b = input().split()
        b = [eval(i) for i in b]
        max_a = max(a)
        max_b = max(b)
        max_val = max(max_a, max_b)
        if (a[size - 1] < max_val and b[size - 1] < max_val):
            print("No")
        elif (b[size - 1] == max_val and a[size - 1] < sorted_b[size - ])
    
    
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()