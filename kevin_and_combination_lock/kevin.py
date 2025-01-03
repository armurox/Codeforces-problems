from copy import copy
def main():
    t = int(input())
    for _ in range(t):
        x = int(input())
        no = False
        yes = False
        while (x >= 33):
            if x % 33 == 0:
                print('YES')
                yes = True
                break
            else:
                temp_x = list(str(copy(x)))
                try:
                    temp_x.remove('3')
                    temp_x.remove('3')
                except ValueError:
                    print('NO')
                    no = True
                    break
                x = int(''.join(temp_x))
        if not no and 0 < x < 33:
            print('NO')
        
        if not yes and x == 0:
            print('YES')
    
    
if __name__ == "__main__":
    main()
