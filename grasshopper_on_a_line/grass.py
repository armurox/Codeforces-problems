def main():
    num_cases = int(input())
    for i in range(0, num_cases):
        x, k = input().split()
        x = int(x)
        k = int(k)
        num_steps = 0
        if (x % k > 0):
            num_steps = 1
            print(num_steps)
            print(x)
        else:
            num_steps = 2
            print(num_steps)
            print(x - 1, "1")
            
main()