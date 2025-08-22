def main():
    t = int(input())
    for _ in range(t):
        l_1, b_1, l_2, b_2, l_3, b_3 = map(int, input().split())
        if ((l_1 == l_2 == l_3) or (b_1 == b_2 == b_3)) or ((l_2 + l_3 == l_1) and (b_2 + b_3 == b_1)):
            print("YES")
        else:
            print("NO")
    
    
if __name__ == "__main__":
    main()
