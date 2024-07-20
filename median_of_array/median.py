def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a.sort()
        m_ind = n // 2 if n % 2 else n // 2 - 1
        m = a[m_ind]
        num_equal = 0
        for i in range(m_ind + 1, n):
            if a[i] == m:
                num_equal += 1
        print(num_equal + 1)
    
    
if __name__ == "__main__":
    main()
