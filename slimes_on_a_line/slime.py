import math
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        min_a = min(a)
        max_a = max(a)
        x = (max_a + min_a) // 2
        print(max(abs(x - min_a), abs(x - max_a)))
    
    
if __name__ == "__main__":
    main()

