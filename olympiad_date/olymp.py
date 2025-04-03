def main():
    t = int(input())
    for _ in range(t):
        nums_dict = {0: 3, 1: 1, 2: 2, 3: 1, 5: 1}
        n = input()
        a = list(map(int, input().split()))
        num_popped = 5
        digits = 0
        found = False
        for elem in a:
            digits += 1
            if elem in nums_dict:
                nums_dict[elem] -= 1
                if nums_dict[elem] == 0:
                    nums_dict.pop(elem)
                    num_popped -= 1
                    if num_popped == 0:
                        print(digits)
                        found = True
                        break
        if not found:
            print(0)
        
    
    
if __name__ == "__main__":
    main()
