def main():
    nums = list(map(int, input().split()))
    print([elem for elem in [1, 2, 3] if elem not in nums][0])
    

if __name__ == "__main__":
    main()
