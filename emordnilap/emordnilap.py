import math
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        print((math.factorial(n) * n * (n - 1)) % ((10 ** 9) + 7))
    
    
if __name__ == '__main__':
    main()
    
