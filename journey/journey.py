def main():
    t = int(input())
    for _ in range(t):
        n, a, b, c = map(int, input().split())
        _sum = a + b + c
        d = 3 * (n // (a + b + c))
        if n % _sum == 0:
            pass
        elif n % _sum <= a:
            d += 1
        elif n % _sum <= a + b:
            d += 2
        else:
            d += 3 
        print(d)
    
    
if __name__ == "__main__":
    main()
