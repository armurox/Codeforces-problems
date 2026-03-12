def main():
    t = int(input())
    for _ in range(t):
        s = input()
        print("YES" if s.count('Y') < 2 else "NO")
    
    
if __name__ == "__main__":
    main()
