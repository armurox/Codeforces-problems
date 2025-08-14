def main():
    t = int(input())
    for _ in range(t):
        s = input()
        end_list = []
        start_list = []
        for elem in s:
            if elem in ['F', 'N']:
                end_list.append(elem)
            else:
                start_list.append(elem)
        print(''.join(start_list + end_list))
    
    
if __name__ == "__main__":
    main()
