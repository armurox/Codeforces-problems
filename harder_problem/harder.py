import random
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a_set = set(a)
        used_set = set()
        temp_used = set()
        final_list = []
        for i in range(n):
            if used_set == a_set:
                used_set = set()
                temp_used = set()
            if a[i] in used_set:
                temp_num = random.randint(1, n)
                while temp_num in used_set:
                    temp_num = random.randint(1, n)
                final_list.append(temp_num)
                used_set.add(temp_num)
            else:
                final_list.append(a[i])
                used_set.add(a[i])
            
        for elem in final_list:
            print(elem, end=" ")
        print()
    

if __name__ == "__main__":
    main()