def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        a.remove(max(a))
        print((2 * sum(a)) - (k- 1))
    
    
if __name__ == "__main__":
    main()
