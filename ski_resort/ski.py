def main():
    case_num: int = int(input())
    for _ in range(case_num):
        a, k, q = input().split()
        a = int(a)
        k = int(k)
        q = int(q)
        temps = input().split()
        temps = [eval(temp) for temp in temps]
        sub_temps = temps
        num_ways = 0
        subset = 0
        n_sub = a
        invalid = 0
        for i, temp in enumerate(temps):
            if temp > q and sub_temps[:i]:
                n_sub = len(sub_temps[:i]) - (k - 1)
                if n_sub - 1 < 0:
                    invalid += a
                num_ways += int((n_sub * (n_sub + 1)) / 2)
                sub_temps = temps[i + 1:]
                subset += 1
                invalid += 1
            elif temp > q:
                invalid += 1
        if subset == 0:
            num_ways += int((n_sub * (n_sub + 1)) / 2)
        elif invalid >= a:
            num_ways = 0
        elif sub_temps:
            n_sub = len(sub_temps) - (k - 1)
            num_ways += int((n_sub * (n_sub + 1)) / 2)
        print(num_ways)
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()