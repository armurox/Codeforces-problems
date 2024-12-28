def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        val = 0
        found = False
        a.sort(reverse=True)
        for elem in a:
            val += elem
            if val >= k:
                if val == k:
                    print(0)
                    found = True
                    break
                else:
                    val -= elem
                    print(k - val)
                    found = True
                    break
        if not found:
            print(k - val)
    
    
if __name__ == "__main__":
    main()
