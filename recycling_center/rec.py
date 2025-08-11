def main():
    t = int(input())
    for _ in range(t):
        n, c = map(int, input().split())
        a = list(map(int, input().split()))
        a.sort(reverse=True)
        curr_multiple = 1
        larger_than_c = []
        for elem in a:
            if elem > c:
                a.remove(elem)
                larger_than_c.append(elem)
        for elem in a:
            if elem * curr_multiple > c:
                a.remove(elem)
                larger_than_c.append(elem)
                # print('test', elem)
            else:
                curr_multiple *= 2
        print(len(larger_than_c))
    
    
if __name__ == "__main__":
    main()
