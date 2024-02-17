def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        required_num = sum(a) // n
        num_to_add = 0
        yes = True
        for elem in a:
            num_to_add -= (required_num - elem)
            if num_to_add < 0:
                print("NO")
                yes = False
                break
        if yes:
            print("YES")
    
    
if __name__ == "__main__":
    main()
