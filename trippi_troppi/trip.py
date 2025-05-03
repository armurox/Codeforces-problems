def main():
    t = int(input())
    for _ in range(t):
        print(''.join([word[0] for word in input().split()]))
            

if __name__ == "__main__":
    main()
