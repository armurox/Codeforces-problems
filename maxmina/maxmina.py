def main():
    case_num = int(input())
    for _ in range(case_num):
        n, k = map(int, input().split())
        arr = list(map(int, input().split()))
        yes = False
        for num in arr:
            if num:
                yes = True
        if yes:
            print("YES")
        else:
            print("NO")
    
if __name__ == "__main__":
    main()
