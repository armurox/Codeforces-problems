def main():
    t = int(input())
    for _ in range(t):
        s = input()
        t = input()
        s_size = len(s)
        t_size = len(t)
        temp_t_size = 1
        temp_s_size = 1
        num_t_in_s = 0
        num_s_in_t = 0
        used_set = set()
        for i in range(1, t_size + 1):
            if s.find(t[:i]) == 0:
                used_set.add(t[:i])
                old_num_t_in_s = num_t_in_s
                num_t_in_s = max(num_t_in_s, (s.count(t[:i]) * len(t[:i])))
                if num_t_in_s != old_num_t_in_s:
                    temp_t_size = len(t[:i])
        for i in range(1, s_size + 1):
            if s[:i] not in used_set and t.find(s[:i]) == 0:
                old_num_s_in_t = num_s_in_t
                num_s_in_t = max(num_s_in_t, (t.count(s[:i]) * len(s[:i])))
                if num_s_in_t != old_num_s_in_t:
                    temp_s_size = len(s[:i])
                    print(s[:i])
        print(t_size + s_size - (num_t_in_s) + (num_t_in_s // temp_t_size) - (num_s_in_t) + (num_s_in_t // temp_s_size))
        

if __name__ == "__main__":
    main()
