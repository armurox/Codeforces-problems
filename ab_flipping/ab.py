def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        first_a_index = -1
        last_b_index = -1
        for i in range(n):
            if s[i] == 'A' and first_a_index == -1:
                first_a_index = i
            if s[i] == 'B':
                last_b_index = i
        print(max(last_b_index - first_a_index, 0))
                
    
    
if __name__ == '__main__':
    main()
