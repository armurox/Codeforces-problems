def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        s = input()
        if is_universal(s):
            print("YES")
        elif k > 0:
            set_s = set([c for c in s])
            if len(set_s) == 1:
                print("NO")
            else:
                print("YES")
        else:
            print("NO")

def is_universal(s):
    for i in range(len(s)):
        if s[i] > s[-(i + 1)]:
            return False
        if s[i] < s[-(i + 1)]:
            return True
    return False


if __name__ == "__main__":
    main()
