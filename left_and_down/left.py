from fractions import Fraction
def main():
    t = int(input())
    for _ in range(t):
        a, b, k = map(int, input().split())
        frac_1 = Fraction(a, b)
        if (k >= frac_1.numerator and k >= frac_1.denominator):
            print(1)
        else:
            print(2)
    
    
if __name__ == "__main__":
    main()
