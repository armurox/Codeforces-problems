def main():
    t = int(input())
    for _ in range(t):
        x, k = input().split()
        k = int(k)
        temp = list(map(int, list(x)))
        x = int(x)
        _sum = sum(temp)
        amt_to_add = k - _sum % k
        if amt_to_add == k:
            print(x)
        elif len(temp) == 1 and temp[-1] + amt_to_add >= 10:
            print(10 + k - 1)
        elif (temp[-1] + amt_to_add >= 10):
            print(x + 10 - (_sum % k) - 1)
        else:
            print(x + amt_to_add)
        

if __name__=="__main__":
    main()
