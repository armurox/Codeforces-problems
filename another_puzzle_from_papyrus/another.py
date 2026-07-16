def main():
    t = int(input())
    for _ in range(t):
        n, c = map(int, input().split())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        re_arrangement_required = False
        for i in range(n):
            if a[i] < b[i]:
                re_arrangement_required = True
                break
        a.sort()
        b.sort()
        subtraction_sum = 0
        for i in range(n):
            if a[i] < b[i]:
                print(-1)
                break
        else:
            for i in range(n):
                subtraction_sum += a[i] - b[i]
            print(subtraction_sum if not re_arrangement_required else subtraction_sum + c)
    

if __name__ == "__main__":
    main()
