def main():
    cn = int(input())
    for _ in range(cn):
        s = input()
        if s == "()" :
            print("NO")
        else:
            print("YES")
            if "((" in s or "))" in s:
                for _ in range(len(s)):
                    print("()", end="")
                print()
            elif ")(" in s:
                for _ in range(len(s)):
                    print("(", end="")
                for _ in range(len(s)):
                    print(")", end="")
                print()
            else:
                print("(())", end="")
                for _ in range(len(s) - 2):
                    print("()", end="")
                print()
                
    
    
if __name__ == "__main__":
    main()
