def main():
    cn = int(input())
    orig = sorted("Timur")
    for _ in range(cn):
        n = int(input())
        s = sorted(input())
        if s != orig:
            print("NO")
        else:
            print("YES")
    
    
if __name__=="__main__":
    main()
