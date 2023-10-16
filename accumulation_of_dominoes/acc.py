def main():
    n, m = map(int, input().split())
    if m == 1:
        print(n - 1)
    else:
        print(n * (m - 1))
    

if __name__=="__main__":
    main()
