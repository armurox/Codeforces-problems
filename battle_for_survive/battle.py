def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        result = a[-2]
        try:
            for elem in reversed(a[:-2]):
                result -= elem
        except (IndexError, TypeError):
            pass
        print(a[-1] - result)
    
    
if __name__ == "__main__":
    main()
