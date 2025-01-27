def main():
    t = int(input())
    for _ in range(t):
        n, a, b = map(int, input().split())
        s = input()
        hash_map = {'N': [0, 1], 'E': [1, 0], 'S': [0, -1], 'W': [-1, 0]}
        initial = [0, 0]
        yes = False
        for c in s:
            initial[0] += hash_map[c][0]
            initial[1] += hash_map[c][1]
            if initial[0] == a and initial[1] == b:
                print("YES")
                yes = True
                break
        if not yes and a % initial[0] == 0 and b % initial[1] == 0:
            print("YES")
            yes = True
        if not yes:
            print("NO")

    
if __name__ == "__main__":
    main()
