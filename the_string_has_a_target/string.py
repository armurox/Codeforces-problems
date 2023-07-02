def main():
    case_num = int(input())
    for _ in range(case_num):
        size = int(input())
        string = input()
        first = string[0]
        if len(string) > 1:
            min_str = min(string[1:])
            if min_str <= first:
                last_occur = string.rfind(min_str)
                string = string[:last_occur] + string[last_occur + 1:]
                string = min_str + string
        print(string)
                
    
    
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()