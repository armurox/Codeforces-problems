def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        print("NO") if a == sorted(a) else print("YES")
    
    
if __name__ == "__main__":
    main()
