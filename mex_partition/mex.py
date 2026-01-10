def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        a.sort()
        mex = 0
        for elem in a:
            if mex == elem:
                mex += 1
        print(mex)
    
    
if __name__ == "__main__":
    main()


