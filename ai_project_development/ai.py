def main():
    t = int(input())
    for _ in range(t):
        n, x, y, z = map(int, input().split())
        num_hours_without_ai = (n // (x + y)) + (1 if n % (x + y) else 0)
        num_hours_with_ai = max(((n - (x * z)) // ((x + (10 * y)))) + z + (1 if (n - (x *z)) % (x + (10 * y)) else 0), 1 + (z if z >= x else 0))
        print(min(num_hours_without_ai,  num_hours_with_ai))
    
    
if __name__ == "__main__":
    main()
