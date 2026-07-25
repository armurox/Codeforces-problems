def main():
    t = int(input())
    for _ in range(t):
        int(input())
        a = list(map(int, input().split()))
        max_val = a[0]
        count = 1
        for elem in a[1:]:
            if elem >= max_val:
                max_val = elem
                count += 1
        print(count)
    

if __name__ == "__main__":
    main()
