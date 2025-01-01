def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a_set = list(set(a))
        used_set = set()
        final_list = []
        found = False
        for i in range(n):
            if a[i] in used_set:
                for elem in a_set:
                    if elem not in used_set:
                            found = True
                            final_list.append(elem)
                            used_set.add(elem)
                            break
                if not found:
                    used_set = set()
                    final_list.append(a[i])
                    used_set.add(a[i])
                found = False    
            else:
                final_list.append(a[i])
                used_set.add(a[i])
            
            
        for elem in final_list:
            print(elem, end=" ")
        print()
    

if __name__ == "__main__":
    main()
