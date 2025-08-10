def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        print(sum(a) + a.count(0))
    
    
if __name__ == "__main__":
    main()
