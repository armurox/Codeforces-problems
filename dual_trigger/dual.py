def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        l = input()
        num_ones = 0
        for elem in l:
            if elem == '1':
                num_ones += 1
        print("NO") if num_ones % 2 or (num_ones == 2 and "11" in l) else print("YES")
    
    
if __name__ == "__main__":
    main()
