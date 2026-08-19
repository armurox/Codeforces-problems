import math
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if is_prime(n + 1):
            print("YES")
        else:
            print("NO")

def is_prime(n):
    for i in range(2, int(math.sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True
    
    
if __name__ == "__main__":
    main()
