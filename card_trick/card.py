def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        m = input()
        b = list(map(int, input().split()))
        i = 0
        for elem in b:
            i = (i + elem) % n
        print(a[i])
            
    
if __name__ == "__main__":
    main()
