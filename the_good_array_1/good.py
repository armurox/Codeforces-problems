from math import ceil

def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        print(2 * ceil(ceil(n / 2) / k))
    
    
if __name__ == "__main__":
    main()
