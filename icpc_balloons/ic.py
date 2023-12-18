def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        non_dups = len(set(input()))
        print(2 * non_dups + n - non_dups)
    
    
if __name__ == "__main__":
    main()
