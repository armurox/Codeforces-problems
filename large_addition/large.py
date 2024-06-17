def main():
    t = int(input())
    for _ in range(t):
        yes = True
        n = list(map(int, input()))
        size = len(n)
        for i in range(size):
            if i== 0 and n[i] != 1:
                print("NO")
                yes = False
                break
            elif i != size - 1 and n[i] == 0:
                print("NO")
                yes = False
                break
            elif i == size - 1 and n[i] == 9:
                print("NO")
                yes = False
                break
        if yes:
            print("YES")
    
    
if __name__ == "__main__":
    main()
