def main():
    t = int(input())
    for _ in range(t):
        l, a, b = map(int, input().split())
        print(max(((l // b) * b) % l, ((l // b) * b + a) % l))
        
    
    
if __name__ == '__main__':
    main()
