def main():
    t = int(input())
    for _ in range(t):
        n = input()
        s = input()
        bracket_count = 0
        for elem in s:
            if elem == ')':
                bracket_count -= 1
            else:
                bracket_count += 1
        print("YES" if bracket_count == 0 else "NO")
    
    
if __name__ == "__main__":
    main()
