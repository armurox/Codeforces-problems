import math

def main():
    t = int(input())
    for _ in range(t):
        x, k = map(int, input().split())
        if (is_prime(x) and k == 1) or x == 1 and k == 2:
            print("YES")
        else:
            print("NO")


def is_prime(num):
    if num == 1:
        return False
    for n in range(2, int(math.sqrt(num)) + 1):
        if num % n == 0:
            return False
    return True
    

if __name__ == "__main__":
    main()
