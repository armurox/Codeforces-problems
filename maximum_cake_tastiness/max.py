def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        sum = a.pop(a.index(max(a)))
        print(sum + max(a))
    
    
if __name__ == "__main__":
    main()
