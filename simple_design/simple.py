def main():
    t = int(input())
    for _ in range(t):
        x, k = input().split()
        k = int(k)
        x = list(map(int, list(x)))
        amt_to_add = sum(x) % k
        index = 0
        for i in range(1, len(x) + 1):
            amt_to_add -= 9 - x[-i]
            index = -i
            if amt_to_add
        
        
            
        
            
        
    
    
if __name__=="__main__":
    main()