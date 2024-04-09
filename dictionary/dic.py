from string import ascii_lowercase
def main():
    a_list = list(ascii_lowercase)
    t = int(input())
    for _ in range(t):
        w = input()
        ans = (25 * (a_list.index(w[0]))) + (a_list.index(w[1]))
        if w[1] < w[0]:
            ans += 1
        print(ans)

    
if __name__ == "__main__":
    main()
