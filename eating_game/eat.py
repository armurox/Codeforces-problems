def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        print(a.count(max(a)))
    
    
if __name__ == "__main__":
    main()

