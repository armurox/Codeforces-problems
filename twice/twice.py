def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        a_set = set()
        num_eq = 0
        for elem in a:
            if elem in a_set:
                num_eq += 2
                a_set.remove(elem)
            else:
                a_set.add(elem)
        print(num_eq // 2)
    
    
if __name__ == "__main__":
    main()
    
