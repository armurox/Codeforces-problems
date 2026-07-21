def main():
    t = int(input())
    for _ in range(t):
        a = list(map(int, input().split()))
        print((2 * max(a)) - sum(a))
    
    
if __name__ == "__main__":
    main()
