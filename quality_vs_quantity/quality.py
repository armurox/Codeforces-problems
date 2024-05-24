def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        no = True
        arr.sort()
        rev_arr = arr[::-1]
        for i in range(1, n // 2):
            if sum(arr[:i + 1]) < sum(rev_arr[:i]):
                print('YES')
                no = False
                break
        if no:
            print('NO')
    
    
if __name__ == "__main__":
    main()
