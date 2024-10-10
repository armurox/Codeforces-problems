def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a_k = []
        a_n = []
        count = 0
        for _ in range(n):
            temp = input()
            a_n.append(temp)
        for i in range(0, n, k):
            a_k.append([])
            for j in range(0, n, k)
                a_k[count].append(a_n[i][j])
            count += 1
        for elem in a_k:
            print(''.join(elem))
    
    
if __name__ == "__main__":
    main()
