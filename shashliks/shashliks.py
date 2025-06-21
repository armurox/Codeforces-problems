def main():
    t = int(input())
    for _ in range(t):
        k, a, b, x, y = map(int, input().split())
        min_ab = min(a, b)
        if min_ab < k:
            print(((k - min_ab) // min(x, y)) + 1)
        else:
            print(0)
    
    
if __name__ == "__main__":
    main()
