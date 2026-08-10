def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        consecutive_count = 0
        max_line = 0
        for char in s:
            if char == '*':
                consecutive_count = 0
            else:
                consecutive_count += 1
                if consecutive_count > max_line:
                    max_line = consecutive_count
        print(max_line // 2 if max_line % 2 == 0 else (max_line + 1) // 2)


if __name__ == "__main__":
    main()
