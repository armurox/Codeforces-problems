def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        countdown = n
        printed = False
        for i in range(n):
            if a[i] != countdown:
                max_ind = a.index(max(a[i:]))
                if max_ind + 1 == n:
                    a = a[:i] + a[i:max_ind + 1][::-1]
                    for elem in a:
                        print(elem, end=' ')
                    print()
                    printed = True
                else:
                    a = a[:i] + a[i:max_ind + 1][::-1] + a[max_ind + 1:]
                    for elem in a:
                        print(elem, end=' ')
                    print()
                    printed = True
                break
                
            countdown -= 1
        if not printed:
            for elem in a:
                print(elem, end=' ')
            print()
        
    
if __name__ == "__main__":
    main()
