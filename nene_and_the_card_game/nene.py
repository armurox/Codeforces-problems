def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        used = set()
        count = 0
        for elem in a:
            if elem in used:
                count += 1
            else:
                used.add(elem)
        print(count)
    
    
if __name__ == "__main__":
    main()
