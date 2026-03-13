def main():
    t = int(input())
    for _ in range(t):
        n = input()
        s = input()
        if '2026' in s or '2025' not in s:
            print(0)
        else:
            print(1)
    
    
if __name__ == "__main__":
    main()
