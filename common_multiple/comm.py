def main():
    t = int(input())
    for _ in range(t):
        n = input()
        print(len(set(map(int, input().split()))))
    
    
if __name__ == "__main__":
    main()
