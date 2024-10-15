def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        num_neg = 0
        apply_rule = False
        no = False
        for i in range(n - 1):
            if a[i] > a[i + 1]:
                apply_rule = True
            if a[i] < 0:
                num_neg += 1
        if a[-1] < 0:
            num_neg += 1
        if not apply_rule:
            print('YES')
        else:
            for i in range(num_neg - 1):
                if abs(a[i]) < abs(a[i + 1]):
                    print('NO')
                    no = True
                    break
            if not no:
                for i in range(num_neg, n - 1):
                    if abs(a[i]) > abs(a[i + 1]):
                        print('NO')
                        no = True
                        break
            if not no:
                print('YES')
    
    
if __name__ == "__main__":
    main()
