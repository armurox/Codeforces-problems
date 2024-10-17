import math
def main():
    t = int(input())
    for _ in range(t):
        x, y = map(int, input().split())
        if x == 0 and y == 0:
            print(0)
        elif math.sqrt(x * x + y * y).is_integer():
            print(1)
        else:
            print(2)
    
    
if __name__ == "__main__":
    main()
