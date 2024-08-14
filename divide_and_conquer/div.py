import copy
def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        min_num_moves = a[0]
        if sum(a) % 2 == 0:
            print(0)
            continue
        for elem in a:
            num_moves = 0
            temp_elem = copy.copy(elem)
            while temp_elem % 2 == elem % 2:
                temp_elem //= 2
                num_moves += 1
            if num_moves < min_num_moves:
                min_num_moves = num_moves
        print(min_num_moves)
    
    
    
if __name__ == "__main__":
    main()
