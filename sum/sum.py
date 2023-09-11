def main():
    cn = int(input())
    for _ in range(cn):
        a, b, c = map(int, input().split())
        if a + b == c or a + c == b or b + c == a:
            print("YES")
        else:
            print("NO")
    
    
if __name__ == "__main__":
    main()
