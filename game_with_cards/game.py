def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        m = input()
        b = list(map(int, input().split()))
        max_a = max(a)
        max_b = max(b)
        if max_a > max_b:
            print("Alice\nAlice")
        elif max_b > max_a:
            print("Bob\nBob")
        else:
            print("Alice\nBob")
    
    
if __name__ == "__main__":
    main()
