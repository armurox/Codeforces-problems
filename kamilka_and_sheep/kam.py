def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        print(max(a) - min(a))
    
    
if __name__ == '__main__':
    main()
