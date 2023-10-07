def main():
    cn = int(input())
    for _ in range(cn):
        n = int(input())
        a = list(map(int, input().split()))
        temp = a.copy()
        p = {}
        temp.sort(reverse = True)
        count = 1
        
        for elem in temp:
            if elem in p:
                p[elem].append(count)
            else:
                p[elem] = [count]
            count += 1
            
        for elem in a:
            perm = p[elem].pop()
            print(perm, end = " ")
        print()
        

if __name__ == "__main__":
    main()
