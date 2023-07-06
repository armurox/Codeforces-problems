import re

def main():
    case_num: int = int(input())
    for _ in range(case_num):
        size = int(input())
        string = input()
        if re.search(r"^[M|m]+[E|e]+[O|o]+[W|w]+$",string):
            print("YES")
        else:
            print("NO")
    
    
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()