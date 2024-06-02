def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = sorted(list(set(map(int, input().split()))))
        if len(a) == 1:
            print("YES")
            continue
        min_a = a.pop(0)
        yes = True
        found_second = False
        second_elem = min_a
        for elem in a:
            if elem % min_a != 0 and not found_second:
                second_elem = elem
                found_second = True
            elif elem % min_a != 0 and elem % second_elem != 0:
                yes = False
                print("NO")
                break
                
        if yes:
            print("YES")
    
    
if __name__ == "__main__":
    main()
