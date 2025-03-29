from statistics import mean
def main():
    t = int(input())
    for _ in range(t):
        n, x = map(int, input().split())
        a = list(map(int, input().split()))
        print("YES" if mean(a) == x else "NO")
        

if __name__ == "__main__":
    main()
