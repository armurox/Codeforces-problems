def main():
    t = int(input())
    for _ in range(t):
        n = input()
        arr = list(map(int, input().split()))
        if (arr[0] % 2 == sum(arr[1:]) % 2):
            print("YES")
        else:
            print("NO")
    
    
if __name__ == "__main__":
    main()
