def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        num_odd = 0
        num_even_four = 0
        num_even_two = 0
        for elem in a:
            if elem % 2:
                num_odd += 1
            elif elem % 4 == 0:
                num_even_four += 1
            else:
                num_even_two += 1
        print(max([num_odd, num_even_four, num_even_two]))
    
    
if __name__ == "__main__":
    main()
