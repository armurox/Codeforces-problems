def main():
    case_num = int(input())
    for _ in range(case_num):
        no = 0
        size = int(input())
        s = input()
        dist = 0
        prev = []
        for i in range(len(s)):
            if s[i] in prev:
                continue
            if no == 1:
                break
            first_occurrence = s.find(s[i])
            for j in range(i, len(s)):
                if s[j] == s[i]:
                    if (j - first_occurrence) % 2 == 1:
                        print("NO")
                        no = 1
                        break
            prev.append(s[i])
        if no == 0:
            print("YES")
    
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()