def main():
    cn = int(input())
    for _ in range(cn):
        s = input()
        if s == "abc" or s == "bac" or s == "cba" or s == "acb":
            print("YES")
        else:
            print("NO")
    
    
if __name__ == "__main__":
    main()
    