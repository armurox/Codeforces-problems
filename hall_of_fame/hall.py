def main():
    case_num = int(input())
    for _ in range(case_num):
        n = int(input())
        arr = input()
        if 'RL' in arr:
                print(0)
        else:
            result = arr.find('LR') + 1
            if result == 0:
                print(-1)
            else:
                print(result)
            
            
if __name__ == "__main__":
    main()