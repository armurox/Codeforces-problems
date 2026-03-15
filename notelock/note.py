def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        s = list(input())
        num_to_protect = 0
        for i in range(n):
            if ('1' not in s[max(0, (i -k) + 1):i] or i == 0) and s[i] == '1':
                num_to_protect += 1
        print(num_to_protect)
    
    
if __name__ == "__main__":
    main()
