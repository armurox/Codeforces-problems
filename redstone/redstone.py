def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        a_set = set(a)
        print('YES' if len(a_set) < len(a) else 'NO') 
    
    
if __name__ == "__main__":
    main()
