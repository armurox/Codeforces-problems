MAX_MOD = 676767677

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        _sum = 0
        for i in range(n):
            if a[i] == 1 and i != n - 1:
                continue
            else:
                _sum += a[i]
        print(_sum % MAX_MOD)
    
    
if __name__ == "__main__":
    main()

