def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        first_index = -1
        second_index = -1
        for i in range(1, n):
            if a[i] > a[i - 1]:
                continue
            elif first_index == -1:
                first_index = i - 1
            else:
                second_index = i - 1
        
        if first_index == -1:
            first_index = 0
            second_index = n - 1
        elif first_index and second_index == -1:
            second_index = n - 1 if first_index != n - 2 else 0
        # swap the two
        if first_index != -1 and second_index != -1:
            temp = a[first_index]
            a[first_index] = a[second_index]
            a[second_index] = temp
        for elem in a:
            print(elem, end=" ")
        print()
            

if __name__ == "__main__":
    main()

