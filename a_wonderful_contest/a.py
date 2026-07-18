def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        for elem in a:
            if elem == 100:
                print("YES")
                break
        else:
            print("NO")
    
    
if __name__ == "__main__":
    main()
