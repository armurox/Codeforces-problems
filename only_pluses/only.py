def main():
    t = int(input())
    for _ in range(t):
        arr = sorted(list(map(int, input().split())))
        amount_left = 5
        while amount_left > 0:
            if arr[1] - arr[0] > amount_left:
                arr[0] += amount_left
                amount_left = 0
            else:
                amount_left -= (arr[1] - arr[0]) or 1
                arr[0] += (arr[1] - arr[0]) or 1
                arr.sort()
        print(arr[0] * arr[1] * arr[2])


if __name__ == "__main__":
    main()

