def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = 4 * [0]
        for i in range(n):
            x, y = map(int, input().split())
            if x < 0:
                arr[0] = 1
            if x > 0:
                arr[1] = 1
            if y < 0:
                arr[2] = 1
            if y > 0:
                arr[3] = 1
        if (sum(arr) == 4):
            print("NO")
        else:
            print("YES")
        
    
if __name__ == "__main__":
    main()
