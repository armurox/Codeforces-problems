def main():
    char_list = {}
    t = int(input())
    for _ in range(t):
        for i in range(1, 27):
            char_list[chr(i + 64)] = i
        n = int(input())
        probs = input()
        num_solved = 0
        for prob in probs:
            char_list[prob] -= 1
            if (char_list[prob] == 0):
                num_solved += 1
        print(num_solved)
    
    
if __name__ == "__main__":
    main()
