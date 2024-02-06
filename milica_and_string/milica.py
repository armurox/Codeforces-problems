def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        s = list(input())
        num_b = s.count('B')
        if (num_b == k):
            print(0)
        elif (num_b < k):
            for i in range(n):
                if s[i] == 'B':
                    continue
                else:
                    s[i] = 'B'
                    num_b += 1
                    if (num_b == k):
                        ans = i + 1
                        break
            print(1)
            print(ans, 'B')
        else:
            for i in range(n):
                if s[i] == 'A':
                    continue
                else:
                    s[i] = 'A'
                    num_b -= 1
                    if (num_b == k):
                        ans = i + 1
                        break
            print(1)
            print(ans, 'A')
            
    
    
if __name__ == "__main__":
    main()
