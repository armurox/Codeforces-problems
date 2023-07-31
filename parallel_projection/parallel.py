def main():
    case_num = int(input())
    for _ in range(case_num):
        w, d, h = input().split()
        w = int(w)
        d = int(d)
        h = int(h)
        a, b, f, g = input().split()
        a = int(a)
        b = int(b)
        f = int(f)
        g = int(g)
        min_length = min(f + a + abs(g - b), g + b + abs(f - a), w - f + w - a + abs(g - b), d - g + d - b + abs(f - a))
        print(h + min_length)
    
    
if __name__ == "__main__":
    main()