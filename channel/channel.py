def main():
    cn = int(input())
    for _ in range(cn):
        n, a, q = map(int, input().split())
        s = input()
        s_u = a
        num_online = a
        possible = False
        yes = False
        for i in range(q):
            if num_online == n:
                print("YES")
                yes = True
                break
            if s[i] == '+':
                num_online += 1
                s_u += 1
            elif s[i] == '-':
                num_online -= 1
            if num_online == n:
                print("YES")
                yes = True
                break
            if s_u == n:
                possible = True
        if possible and yes == False:
            print("MAYBE")
        elif yes == False:
            print("NO")
        
            
    
    
if __name__ == "__main__":
    main()