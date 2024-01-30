from math import sqrt
def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        if (sqrt(sum(a)).is_integer()):
            print("YES")
        else:
            print("NO")
        
    
    
if __name__ == "__main__":
    main()
