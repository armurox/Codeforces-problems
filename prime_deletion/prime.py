def main():
    cn = int(input())
    for _ in range(cn):
        d = input()
        if d.index('1') < d.index('3'):
            print(13)
        else:
            print(31)
        
    
    
if __name__ == "__main__":
    main()
