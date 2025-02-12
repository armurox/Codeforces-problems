from copy import copy
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = input()
        v = ['a', 'e', 'i', 'o', 'u']
        print('hello')
        temp_s = copy(a)
        i = 0
        while i < n:
            yes = True
            try:
                if temp_s[i + 3] not in v:
                    temp_s = temp_s[:i + 3] + '.' + temp_s[i + 3:]
                    i += 4
                    yes = False
            except IndexError:
                pass
            else:
                try:
                    if yes:
                        temp_s = temp_s[:i + 2] + '.' + temp_s[i + 2:]
                        i += 3
                except IndexError:
                    break
        print(temp_s)
            
    
    
if __name__ == "__main__":
    main()
