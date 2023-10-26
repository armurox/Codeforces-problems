def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if (n % 3 == 0):
            num_moves = n // 3
        elif (n % 3 == 1):
            num_moves = n // 3 + 2
            print("Here")
        elif (n % 3 == 2):
            num_moves = n // 3 + 1
            print("Here")
        if (n % 2 == 0 and n // 2 < num_moves):
            num_moves = n // 2
            print("Here")
        elif (n // 2 + 2 < num_moves):
            num_moves = n // 2 + 2
        print(num_moves)
    
if __name__ == "__main__":
    main()
