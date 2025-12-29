def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        num_op = 0
        for i in range(n - 1):
            if s[i] != s[n - 1]:
                num_op += 1
        print(num_op)
    
    
if __name__ == "__main__":
    main()
