def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        max_val = max(a)
        max_index = a.index(max_val)
        try:
            curr_val = a[max_index - 1]
        except IndexError:
            curr_val = a[max_index + 1]
    
    
if __name__ == "__main__":
    main()

