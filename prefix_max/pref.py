#!/usr/bin/env python3
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        print(max(a) * n)
    
    
if __name__ == "__main__":
    main()
