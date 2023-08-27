def main():
    case_num = int(input())
    for _ in range(case_num):
        word = input()
        print(word, end = "")
        new_word = list(word)
        new_word.reverse()
        print("".join(str(i) for i in new_word))
    
if __name__ == "__main__":
    main()
