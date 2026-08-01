def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        if k >= n:
            print(n)
        else:
            initial = n // k
            curr = initial - 1
            while (curr.bit_length() <= (n // k).bit_length() and curr > 0):
                curr -= 1
            print(max((curr).bit_length() * k, initial.bit_length() * k))
    
    
if __name__ == "__main__":
    main()
