def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        a_b_tuple = [(a[i], b[i]) for i in range(n)]
        a_b_tuple.sort(key=lambda a: a[0])
        final_ram = k
        for elem in a_b_tuple:
            if elem[0] <= final_ram:
                final_ram += elem[1]
        print(final_ram)
    
    
if __name__ == '__main__':
    main()
