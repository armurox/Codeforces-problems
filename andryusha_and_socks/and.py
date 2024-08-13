def main():
    n = int(input())
    a = list(map(int, input().split()))
    table = set()
    count = 0
    _max = 0
    for elem in a:
        if elem not in table:
            count += 1
            table.add(elem)
        else:
            count -= 1
        _max = count if count > _max else _max
    print(_max)
    
    
if __name__ == "__main__":
    main()

