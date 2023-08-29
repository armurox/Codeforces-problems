def main():
    case_num = int(input())
    for _ in range(case_num):
        n = int(input())
        word = input()
        yes = True
        for i in range(n):
            if (word[i:].count("Q") > word[i:].count("A")):
                print("No")
                yes = False
                break
        if yes:
            print("Yes")
    
    
if __name__ == "__main__":
    main()
