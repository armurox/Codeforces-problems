def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        x, y = 1, 1
        max_hashes = 0
        curr_line = ''
        for i in range(n):
            curr_line = input()
            if (hashes := curr_line.count('#')) > max_hashes:
                max_hashes = hashes
                x = i + 1
                last_hash = None
                start_hash = None
                for j in range(len(curr_line)):
                    if curr_line[j] == '#' and start_hash is None:
                        start_hash = j + 1
                    elif curr_line[j] == '#':
                        last_hash = j + 1
                if last_hash is None:
                    last_hash = start_hash
                center = start_hash + last_hash
                y = center // 2 if center % 2 == 0 else center // 2 + 1
        print(x, y)
    

if __name__ == "__main__":
    main()
