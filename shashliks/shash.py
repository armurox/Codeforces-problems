def main():
    t = int(input())
    for _ in range(t):
        k, a, b, x, y = map(int, input().split())
        if k < a and k < b:
            print(0)
        elif x < y:
            print((k - a) // x + ((a - b) // y if b < a else 0) + 1)
        else:
            print((k - b) // y + ((b - a) // x if a < b else 0) + 2)
    
    
if __name__ == "__main__":
    main()
