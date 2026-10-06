def main():
    t = int(input())
    for _ in range(t):
        a, b, c = map(int, input().split())
        if abs((a + c) - b) > abs(a - b):
            print(abs((a + c) - b))
        else:
            print(abs(a - b))
    

if __name__ == "__main__":
    main()
