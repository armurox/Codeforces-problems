import math
def main():
    t = int(input())
    for _ in range(t):
        l, r, k = map(int, input().split())
        diff = math.ceil((r - l) / 2)
        if (l == r and l != 1) or k > diff:
            print("YES")
        elif k == diff and (l % 2 == 0 or r % 2 == 0):
            print("YES")
        else:
            print("NO")
        
    
if __name__ == "__main__":
    main()
