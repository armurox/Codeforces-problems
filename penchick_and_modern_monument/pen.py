def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        curr_ans = n - 1
        a = list(map(int, input().split()))
        a_set = set(a)
        _max = 0
        for elem in a_set:
            temp = a.count(elem)
            _max = temp if temp > _max else _max
        curr_ans -= (_max - 1)
        print(curr_ans)
        
    
if __name__ == "__main__":
    main()
