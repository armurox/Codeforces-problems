def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        print(a.index(min(a)) + 1, a.index(max(a)) + 1)
    
    
if __name__ == "__main__":
    main()
