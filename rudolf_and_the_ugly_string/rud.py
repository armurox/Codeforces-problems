def main():
    t = int(input())
    for _ in range(t):
        n = input()
        a = input()
        print(a.count('pie') + a.count('map') - a.count('mapie'))
    
    
if __name__ == "__main__":
    main()
