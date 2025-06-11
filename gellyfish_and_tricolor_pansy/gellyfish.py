def main():
    t = int(input())
    for _ in range(t):
        a, b, c, d = map(int, input().split())
        if min(a, c) >= min(b, d):
            print('Gellyfish')
        else:
            print('Flower')
        

if __name__ == "__main__":
    main()
