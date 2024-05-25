def main():
    t = int(input())
    for _ in range(t):
        n, s = map(int, input().split())
        num_squared = n * n
        for i in range(1, n + 2):
            if i * num_squared > s:
                print(i - 1)
                break
            elif i * num_squared == s:
                print(i)
                break
        
    
    
if __name__ == "__main__":
    main()
