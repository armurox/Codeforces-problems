def main():
    case_num = int(input())
    for i in range(0, case_num):
        size = int(input())
        array = input()
        orig_array = size * [None]
        orig = array[0]
        k = 0
        i = 1
        while i < size:
            if array[i] == orig:
                orig_array[k] = array[i]
                if i != size - 1:
                    orig = array[i + 1]
                k+= 1
                i+= 1
            i += 1
        for i in range(0, size):
            if orig_array[i] != None:
                print(orig_array[i], end = "")
        print()


main()