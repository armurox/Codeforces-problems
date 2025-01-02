def main():
    t = int(input())
    square_set = set(elem * elem for elem in range(1, 101) if elem % 2)
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        _sum = 0
        num_happy_days = 0
        for elem in a:
            _sum += elem
            if _sum in square_set:
                num_happy_days += 1
        print(num_happy_days)
    
    
if __name__ == "__main__":
    main()
