def main():
    cn = int(input())
    for _ in range(cn):
        n, c = map(int, input().split())
        min_cost = 0
        orb_l = list(map(int, input().split()))
        orbs = {}
        for orbit in orb_l:
            if orbit in orbs:
                orbs[orbit] += 1
            else:
                orbs[orbit] = 1
        for orbit in orbs:
            if orbs[orbit] >= c:
                min_cost += c
            else:
                min_cost += orbs[orbit]
        print(min_cost)
        
    
    
if __name__ == "__main__":
    main()