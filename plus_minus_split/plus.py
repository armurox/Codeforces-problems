def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = input()
        ans = 0
        for elem in a:
            if elem == '-':
                ans -= 1
            else:
                ans += 1        
        print(abs(ans))
    
    
if __name__ == "__main__":
    main()
