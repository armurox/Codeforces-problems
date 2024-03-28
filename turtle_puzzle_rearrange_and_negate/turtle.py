def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(abs, map(int, input().split())))
        print(sum(a))
    
    
if __name__ == "__main__":
    main()
