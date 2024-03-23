def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        a_set = set(a)
        sum_a = sum(a)
        if not sum_a % 3:
            print(0)
        elif sum_a % 3 == 1:
            no = True
            for elem in a_set:
                if elem % 3 == 1:
                    print(1)
                    no = False
                    break
            if no:
                print(2)
        else:
            print(1)
    
    
if __name__ == "__main__":
    main()
