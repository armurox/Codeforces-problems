def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a_set = list(set(a)) 
        min_count = a.count(a_set[0])
        for elem in a_set:
            min_count = min(min_count, a.count(elem))
        print(min_count * len(a_set))
            
    
    
if __name__ == "__main__":
    main()
