def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        arr_u = list(set(arr))
        num_diff = len(arr_u)
        prev_element = ""
        if num_diff > 2:
            print("NO")
        elif num_diff == 1:
            print("YES")
        elif (arr.count(arr_u[1]) < arr.count(arr_u[0]) - 1 or arr.count(arr_u[0]) < arr.count(arr_u[1]) - 1 ):
            print("NO")
        else:
            print("YES")
                
    
if __name__ == "__main__":
    main()
