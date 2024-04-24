def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        print('errorgorn') if (sum(a) - n) % 2 else print('maomao90')
    
    
if __name__ == "__main__":
    main()
