def main():
    t = int(input())
    for _ in range(t):
        s = int(input())
        _s = 0
        nums = []
        for i in range(9):
            _s += 9 - i
            if _s < s:
                nums.append(9 - i)
                continue
            elif _s == s:
                nums.append(9 - i)
                break
            else:
                _s -= 9 - i
                break
        if _s < s:
            nums.append(s - _s)
        for num in reversed(nums):
            print(num, end="")
        print
    
    
if __name__ == "__main__":
    main()