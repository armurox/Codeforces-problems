def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        print(n - a.count(max(a, key=lambda x : a.count(x))))
    
if __name__ == "__main__":
    main()
