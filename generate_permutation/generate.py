from collections import deque
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n % 2 == 0:
            print(-1)
        else:
            a = [i for i in range(1, n + 1)]
            for i in range(1, n, 2):
                a[i], a[i + 1] = a[i + 1], a[i]
            for elem in a:
                print(elem, end=' ')
            print()   
    
    
if __name__ == "__main__":
    main()
