def main():
    case_num = int(input())
    for _ in range(case_num):
        n = int(input())
        if n % 2:
            print(n // 2 + 1)
        else:
            print(n // 2)
    
    
if __name__ == "__main__":
    main()
