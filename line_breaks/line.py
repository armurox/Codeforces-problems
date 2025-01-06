def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        a = []
        for _ in range(n):
            a.append(input())
        x = 0
        char_len = 0
        for elem in a:
            char_len += len(elem)
            if char_len <= m:
                x += 1
            else:
                break
        print(x)
    
    
if __name__ == "__main__":
    main()
