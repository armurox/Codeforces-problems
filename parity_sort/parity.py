def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr_1 = list(map(int, input().split()))
        arr_2 = arr_1.copy()
        arr_2.sort()
        no = False
        for i in range(n):
            if (arr_1[i] % 2 != arr_2[i] % 2):
                print("NO")
                no = True
                break
        if not no:
            print("YES")
        
    
    
if __name__ == "__main__":
    main()
