def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        count = 0
        for i in range(n, n + 82):
            if i - sum([int(elem) for elem in str(i)]) == n:
                count += 1
        print(count)

if __name__ == "__main__":
    main()
