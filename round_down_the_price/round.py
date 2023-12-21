def main():
    t = int(input())
    for _ in range(t):
        num = input()
        power = len(num) - 1
        num = int(num)
        ten = pow(10, power)
        if num == ten:
            print(0)
        else:
            print(num - ten)
        
    
    
if __name__ == "__main__":
    main()
