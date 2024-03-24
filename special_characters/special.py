import string
def main():
    ul = string.ascii_uppercase
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n % 2:
            print("NO")
        else:
            print("YES")
            for i in range(n // 2):
                print(f"{ul[i % 26]}{ul[i % 26]}", end="")
            print()
    
    
if __name__ == "__main__":
    main()
