def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        one_even = False
        ans = 0
        for elem in a:
            if elem % 2 == 0 and not one_even:
                ans += 1
                one_even = True
        for elem in a:
            if elem % 2 and one_even:
                ans += 1    
        print(ans)
    
    
if __name__ == "__main__":
    main()
