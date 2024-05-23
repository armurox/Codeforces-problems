def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        flip = False
        if n % 3 == 1:
            while n > 0:
                if flip:
                    print('2', end='')
                    n -= 2
                else:
                    print('1', end='')
                    n -= 1
                flip = not flip
        else:
            while n > 0:
                if flip:
                    print('1', end='')
                    n -= 1
                else:
                    print('2', end='')
                    n -= 2
                flip = not flip
        print()
    

if __name__ == "__main__":
    main()
