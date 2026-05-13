def main():
    t = int(input())
    for _ in range(t):
        n = input()
        s = input()
        num_touched = 1
        for elem in s:
            if elem == 'R':
                num_touched += 1
            else:
                break
        print(num_touched)
    
    
if __name__ == "__main__":
    main()
