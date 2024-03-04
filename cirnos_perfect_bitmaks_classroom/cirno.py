def main():
    t = int(input())
    for _ in range(t):
        x = str(bin(int(input())))
        num_ones = x.count('1')
        first_index = x.rfind('1')
        size = len(x)
        construct_new = []
        if num_ones > 1:
            for i in range(size):
                if i == first_index:
                    construct_new.append('1')
                else:
                    construct_new.append('0')
        elif first_index == size - 1:
            for i in range(size):
                if i == first_index - 1:
                    construct_new.append('1')
                elif i == first_index:
                    construct_new.append('1')
                else:
                    construct_new.append('0')
        else:
            for i in range(size):
                if i == size - 1:
                    construct_new.append('1')
                elif i == first_index:
                    construct_new.append('1')
                else:
                    construct_new.append('0')
        print(int("".join(construct_new), 2))
    
    
if __name__ == "__main__":
    main()
