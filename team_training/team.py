def main():
    t = int(input())
    for _ in range(t):
        n, x = map(int, input().split())
        a = list(map(int, input().split()))
        a.sort()
        team_size = n
        curr_size = a[0]
        start = a[0]
        for elem in a[1:]:
            if curr_size < x:
                team_size -= 1
                curr_size += start
            elif elem < x and curr_size >= x:
                curr_size = elem
                start = elem
        print(team_size)
    
    
if __name__ == '__main__':
    main()
