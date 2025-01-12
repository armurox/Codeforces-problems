def main():
    t = int(input())
    for _ in range(t):
        n, a, b, c = map(int, input().split())
        _sum = 0
        days = 0
        if a == 1 and b == 1 and c == 1:
            print(n)
            continue
        while (_sum < n):
            if days % 3 == 0:
                _sum += a
            elif days % 3 == 1:
                _sum += b
            else:
                _sum += c
            days += 1
        print(days)
    
    
if __name__ == "__main__":
    main()
