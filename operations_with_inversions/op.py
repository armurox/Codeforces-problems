def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        curr_index = n
        num_inversions = 0
        while curr_index > 0:
            curr_max = max(a[:curr_index])
            max_num_index = a.index(curr_max)
            for elem in a[max_num_index:curr_index]:
                if curr_max > elem:
                    num_inversions += 1
            curr_index = max_num_index
        print(num_inversions)
    
    
if __name__ == "__main__":
    main()
