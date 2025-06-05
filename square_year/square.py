import math
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        square_root = math.sqrt(n)
        if square_root % 1 == 0:
            print(0, int(square_root))
        else:
            print(-1)
    
    
if __name__ == "__main__":
    main()
