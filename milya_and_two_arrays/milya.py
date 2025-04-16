def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(set(map(int, input().split())))
        b = list(set(map(int, input().split())))
        
        if len(a) + len(b) > 3:
            print("YES")
        else:
            print("NO")
    
    
if __name__ == "__main__":
    main()
