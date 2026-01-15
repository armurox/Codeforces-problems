def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        if sum(a) % 3 == 0:
            print(1, 2)
        else:
            print(0, 0)
    
    
if __name__ == "__main__":
    main()
