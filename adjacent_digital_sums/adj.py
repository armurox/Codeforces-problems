def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        if a + 1 >= b and (a + 1 - b) % 9 == 0:
            print('YES')
        else:
            print('NO')


def sum_digits(n):
    _sum = 0
    while n > 0:
        _sum += n % 10
        n //= 10
    return _sum

    
    
if __name__ == "__main__":
    main()

