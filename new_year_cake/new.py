def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        left_max = 0
        right_max = 0
        original_a = a
        original_b = b
        count = 1
        flip = 0
        while (a >= 0 and b >= 0):
            if flip == 0:
                a -= count
            else:
                b -= count
            count *= 2
            left_max += 1
            flip = 1 if not flip else 0
        left_max -= 1
        flip = 0
        count = 1
        while (original_a >= 0 and original_b >= 0):
            if flip == 0:
                original_b -= count
            else:
                original_a -= count
            count *= 2
            right_max += 1
            flip = 1 if not flip else 0
        right_max -= 1
        print(max(left_max, right_max))
    

if __name__ == "__main__":
    main()
