def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        inversions = 0
        back_to_normal = 0
        for start, end in zip(s[: n // 2], s[n // 2:][::-1]):
            if start == end and not inversions:  
                continue
            elif start != end and inversions == 0:
                inversions += 1
            elif start == end and inversions == 1:
                back_to_normal += 1
            elif start != end and back_to_normal:
                inversions += 1
                break
        if inversions > 1:
            print("NO")
        else:
            print("YES")
    
    
if __name__ == "__main__":
    main()
