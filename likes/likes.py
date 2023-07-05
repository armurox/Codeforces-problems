def main():
    case_num: int = int(input())
    for _ in range(case_num):
        size = int(input())
        arr = input().split()
        arr = [eval(i) for i in arr]
        arr.sort(reverse = True)
        curr_likes = 0
        hash_map = {}
        max_arr = []
        min_arr = []
        for i in arr:
            if i > 0:
                curr_likes += 1
                max_arr.append(curr_likes)
            elif i < 0:
                curr_likes -= 1
                max_arr.append(curr_likes)
                hash_map[i] = -i
        curr_likes = 0
        for i in sorted(arr):
            if -i in hash_map:
                continue
            elif i in hash_map:
                min_arr.append(1)
                min_arr.append(0)
            else:
                curr_likes += 1
                min_arr.append(curr_likes)
        for i in max_arr:
            print(i, end = " ")
        print()
        for i in min_arr:
            print(i, end = " ")
        print()
                
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()