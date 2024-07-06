def main():
    t = int(input())
    for _ in range(t):
        x, y = map(int, input().split())
        max_val = max(x, y)
        first_is_min = True if x < max_val else False
        new_x, new_y = map(int, input().split())
        new_max_val = max(new_x, new_y)
        first_is_min_2 = True if new_x < new_max_val else False
        print('YES') if first_is_min == first_is_min_2 else print('NO')
    
    
if __name__ == "__main__":
    main()
