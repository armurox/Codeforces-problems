def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        start = max(a, b)
        while (start <= 10000000):
            if start % a == start % b:
                print(start)
                break
            else:
                start += 1
    
    
if __name__ == "__main__":
    main()
