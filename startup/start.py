def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        hash_map = {}
        for _ in range(k):
            b, c = map(int, input().split())
            if b in hash_map:
                hash_map[b] += c
            else:
                hash_map[b] = c
        sorted_ans = sorted(list(hash_map.values()))
        sorted_ans.reverse()
        print(sum(sorted_ans[:n]))
    
    
if __name__ == "__main__":
    main()

