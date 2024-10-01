def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = input()
        max_correct_answers = 0
        for elem in ['A', 'B', 'C', 'D']:
            max_correct_answers += min(a.count(elem), n)
        print(max_correct_answers)


if __name__ == "__main__":
    main()
