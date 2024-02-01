import string
def main():
    t = int(input())
    al = string.ascii_lowercase
    for _ in range(t):
        n, k = map(int, input().split())
        for _ in range(n):
            for i in range(k):
                print(al[i], end="")
        print()
    
        
    
    
if __name__ == "__main__":
    main()
