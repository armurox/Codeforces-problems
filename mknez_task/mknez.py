def main():
    case_num = int(input())
    for _ in range(case_num):
        size = int(input())
        if (size == 3):
            print("NO")
            continue
        elif (size % 2 == 0):
            print("YES")
            arr = []
            for i in range(size):
                if i % 2 == 0:
                    arr.append(1) 
                else:
                    arr.append(-1)
                print(arr[i], end = " ")
            print()
        else:
            print("YES")
            arr = []
            arr = []
            for i in range(size):
                if i % 2 == 0:
                    arr.append((size - 2)// 2)
                else:
                    arr.append(-1 * (((size - 2)// 2) + 1))
                print(arr[i], end = " ")
            print()
    
    
    
    
    
    
    
    
    
    

if __name__ == "__main__":
    main()