def main():
    t = int(input())
    for _ in range(t):
        s = input()
        resultant_s = []
        for elem in s:
            if result := {'p': 'q', 'q' : 'p'}.get(elem):
                resultant_s.append(result)
            else:
                resultant_s.append(elem)
        print(''.join(resultant_s)[::-1])
    

if __name__ == "__main__":
    main()
