def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        count = 1
        while n > 3:
            n //= 4
            count *= 2
        print(count)
    
    
if __name__ == "__main__":
    main()
