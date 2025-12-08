def main():
    a = list(map(int, input().split()))
    if max(a) - min(a) >= 10:
        print('check again')
    else:
        a.sort()
        print('final', a[1])

    
if __name__ == '__main__':
    main()

