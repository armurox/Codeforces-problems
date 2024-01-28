def main():
    t = int(input())
    for _ in range(t):
        x = set()
        y = set()
        for _ in range(4):
            x_i, y_i = map(int, input().split())
            x.add(x_i)
            y.add(y_i)
        x = list(x)
        y = list(y)
        print(abs(x[0] - x[1]) * abs(y[0] - y[1]))
        
    

if __name__ == "__main__":
    main()
