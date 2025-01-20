def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        count = 1
        curr = n
        used_counts = set()
        for i in range(n):
            if (i + 1) % k == 0:
                print(count, end=" ")
                used_counts.add(count)
                count += 1
            else:
                print(curr, end=" ")
                curr -= 1
        print()
                

if __name__ == "__main__":
    main()
