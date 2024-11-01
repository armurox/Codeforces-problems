def main():
    t = int(input())
    for _ in range(t):
        n, r = map(int, input().split())
        num_happy = 0
        num_left = 0
        a = list(map(int, input().split()))
        for elem in a:
            found_happy = (2 * (elem // 2))
            num_happy += found_happy
            num_left += elem % 2
            r -= (elem // 2) if found_happy else 0
        while r > num_left // 2 and num_left > 0:
            r -= 1
            num_left -= 1
            num_happy += 1
        print(num_happy)
        

if __name__ == "__main__":
    main()
