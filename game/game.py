def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        init_index = 1
        fin_index = n
        for elem in arr[1:]:
            if elem != 1:
                break
            init_index += 1
        
        for elem in arr[::-1][1:]:
            if elem != 1:
                break
            fin_index -= 1
        print(fin_index - init_index if fin_index >= init_index else 0)


if __name__ == "__main__":
    main()
