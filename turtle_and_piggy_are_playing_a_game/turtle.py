def main():
    t = int(input())
    for _ in range(t):
        l, r = map(int, input().split())
        power = 0
        for i in range(32):
            if 2 ** i > r:
                power = i - 1
                break
        print(power)
    
    
if __name__ == "__main__":
    main()
