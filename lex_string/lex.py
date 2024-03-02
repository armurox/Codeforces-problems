def main():
    t = int(input())
    for _ in range(t):
        n, m, k = map(int, input().split())
        a = list(input())
        b = list(input())
        nums = []
        count_a = 0
        count_b = 0
        a.sort()
        b.sort()
        while(len(a) > 0 and len(b) > 0):
            val_a = a[0]
            val_b = b[0]
            if (val_a <= val_b and count_a < k) or count_b >= k:
                a.pop(0)
                nums.append(val_a)
                count_a += 1
                count_b = 0
            elif (val_a > val_b and count_b < k) or count_a >= k:
                b.pop(0)
                nums.append(val_b)
                count_b += 1
                count_a = 0
        for elem in nums:
            print(elem, end="")
        print()
        
            
            
    
    
if __name__ == "__main__":
    main()
