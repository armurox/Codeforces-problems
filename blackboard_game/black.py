def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        print("Bob" if n % 4 == 0 else "Alice")
    
    
if __name__ == "__main__":
    main()
