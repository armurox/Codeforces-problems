def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        curr_sum = n - 1
        curr = n - 1
        while curr > 1 and curr > 0:
            curr -= 2
            curr_sum += curr
        print(curr_sum + 1)
        

if __name__ == "__main__":
    main()
