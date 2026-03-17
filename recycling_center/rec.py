def main():
    t = int(input())
    for _ in range(t):
        n, c = map(int, input().split())
        a = list(map(int, input().split()))
        a.sort(reverse=True)
        num_two_multiples = 0
        num_coins = 0
        for elem in a:
            if elem * (2 ** num_two_multiples) > c:
                num_coins += 1
            else:
                num_two_multiples += 1
        print(num_coins)
        

if __name__ == "__main__":
    main()
