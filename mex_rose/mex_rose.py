import contextlib
def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        a.sort()
        list_to_k = set([elem for elem in range(k)])
        mex = 0 if a[0] > 0 else 1
        with contextlib.suppress(KeyError):
            list_to_k.remove(a[0])
        for elem in a[1:]:
            if elem == mex:
                mex += 1
            with contextlib.suppress(KeyError):
                list_to_k.remove(elem)
        if mex == k:
            print(0)
        else:
            print(max(len(list_to_k), a.count(k)))


if __name__ == "__main__":
    main()
