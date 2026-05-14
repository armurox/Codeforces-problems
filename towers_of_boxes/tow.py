def main():
    t = int(input())
    for _ in range(t):
        n, m, d = map(int, input().split())
        size_of_tower = d // m + 1
        if n < size_of_tower:
            print(1)
        else:
            print((n // size_of_tower) + (1 if n % size_of_tower != 0 else 0))
    
    
if __name__ == "__main__":
    main()

