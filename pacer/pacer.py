def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        switch_parity = False
        total_points = 0
        prev = 0
        prev_b = 0
        for _ in range(n):
            a, b = map(int, input().split())
            total_points += (a - prev)
            total_points -= 1 if (((a - prev) + 2) % 2 != ((b - prev_b) + 2) % 2) else 0
            prev = a
            prev_b = b
        print(total_points + (m - a))

    
if __name__ == "__main__":
    main()
