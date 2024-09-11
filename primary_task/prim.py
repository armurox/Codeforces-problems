def main():
    t = int(input())
    for _ in range(t):
        n = input()
        size = len(n)
        if size < 3:
            print("NO")
        elif n[0] == '1' and n[1] == '0' and int(n[2]) > 1:
            print('YES')
        elif size > 3 and n[0] == '1' and n[1] == '0' and n[2] == '1':
            print("YES")
        else:
            print("NO")
    
    
if __name__ == "__main__":
    main()

