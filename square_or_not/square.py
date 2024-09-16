from math import sqrt
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        root = str(sqrt(n))
        ans = 'Yes' if any([all(['0' in s, root[root.index('.') + 1] == '0']), all([root == '2.0', '0' not in s])]) else 'No'
        print(ans)

if __name__ == "__main__":
    main()
