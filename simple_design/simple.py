def main():
    t = int(input())
    for _ in range(t):
        x, k = input().split()
        k = int(k)
        temp = list(map(int, list(x)))
        temp_1 = temp.copy()
        temp_1[-1] -= temp_1[-1]
        ans = 0
        x = int(x)
        curr_sum = sum(temp)
        sec_sum = sum(temp_1) + 1
        curr_amt = curr_sum % k
        amt_to_add = k - curr_amt
        if curr_amt == 0:
            print(x)
        elif (temp[-1] + amt_to_add < 10):
            print(x + amt_to_add)
        else:
            print(x - temp[-1] + 10 + (k - sec_sum % k))

if __name__=="__main__":
    main()
