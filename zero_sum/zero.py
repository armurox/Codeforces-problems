def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        if n % 2:
            print("NO")
            continue
        else:
            num_ones = 0
            for elem in a:
                if elem == 1:
                    num_ones += 1
            if num_ones % 2 == (n // 2) % 2:
                print("YES")
            else:
                print("NO")
    
    
if __name__ == "__main__":
    main()
