def main():
    case_num = int(input())
    for _ in range(case_num):
        str_size = int(input())
        strings = input().split()
        count = 0
        for string in strings:
            if len(string) == str_size - 1 and count == 0:
                prefix = string
                count += 1
            elif len(string) == str_size - 1 and count > 0:
                suffix = string
            
        if suffix[1:str_size - 1] == prefix[0:str_size - 2]:
            temp = suffix
            suffix = prefix
            prefix = temp
        
        orig = prefix + suffix[str_size - 2]
        if orig == orig[::-1]:
            print("YES")
        else:
            print("NO")
    
    
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()