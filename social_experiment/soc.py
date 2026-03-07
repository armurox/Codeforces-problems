def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n in [2, 3]:
            print(n)
        elif n % 2 == 0:
            print(0)
        else:
            print(1)

    
if __name__ == '__main__':
    main()
