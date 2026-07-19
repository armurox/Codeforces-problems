def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = list(map(int, input().split()))
        if contains_duplicate(a):
            print(-1)
        else:
            a.sort(reverse=True)
            for elem in a:
                print(elem, end=" ")
            print()
    
def contains_duplicate(array):
    duplicate_set = set()
    for elem in array:
        if elem in duplicate_set:
            return True
        duplicate_set.add(elem)
    return False


if __name__ == "__main__":
    main()
