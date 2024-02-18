def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if (n <= 28):
            print("aa" + chr(n + 94))
        elif (n <= 53):
            print("a" + chr(n + 69) + "z")
        else:
            print(chr(n + 44) + "zz")
    
    
if __name__ == "__main__":
    main()
