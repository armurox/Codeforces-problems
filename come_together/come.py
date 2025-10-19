
mii = lambda: map(int, input().split())

def main():
    t = int(input())
    for _ in range(t):
        x_a, y_a = mii()
        x_b, y_b = mii()
        x_c, y_c = mii()
        shared_steps = 1
        if (x_b < x_a and x_c < x_a) or (x_b > x_a and x_c > x_a):
            shared_steps += min(abs(x_b - x_a), abs(x_c - x_a))
        if (y_b < y_a and y_c < y_a) or (y_b > y_a and y_c > y_a):
            shared_steps += min(abs(y_b - y_a), abs(y_c - y_a))
        print(shared_steps)
    
    
if __name__ == "__main__":
    main()
