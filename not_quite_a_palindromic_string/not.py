def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        s = input()
        num_ones = s.count('1')
        num_zeros = s.count('0')
        if ((num_ones - (2 * k)) == num_zeros) or ((num_zeros - (2 * k)) == num_ones) or ((num_ones // 2 + num_zeros // 2) - k == 0):
            print("YES")
        else:
            print("NO")
            

if __name__ == "__main__":
    main()
