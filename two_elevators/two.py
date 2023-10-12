def main():
    cn = int(input())
    for _ in range(cn):
        a, b, c = map(int, input().split())
        first = abs(a - 1)
        second = abs(b - c) + abs(c - 1)
        if first < second:
            print(1)
        elif second < first:
            print(2)
        else:
            print(3)
    
    
if __name__ == "__main__":
    main()
