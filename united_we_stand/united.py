def main():
    case_num = int(input())
    for _ in range(case_num):
        n = int(input())
        array = input().split()
        arr = [int(i) for i in array]
        max_num = max(arr)
        count_max = arr.count(max_num)
        count_rest = n - count_max
        if count_max == n:
            print(-1)
        else:
            print(count_rest, count_max)
            for element in arr:
                if element != max_num:
                    print(element, end = " ")
            print()
            for i in range(count_max):
                print(max_num, end = " ")
            print()
            

if __name__ == "__main__":
    main()