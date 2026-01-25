from collections import deque
def main():
    t = int(input())
    for _ in range(t):
        s = deque()
        n = input()
        strings = list(input().split())
        for i in range(len(strings)):
            if i == 0:
                s.append(strings[i])
            else:
                s = find_lexicographically_smaller(strings[i], s)
        print(''.join(s))


def find_lexicographically_smaller(a, b):
    temp_s_left = deque(b)
    temp_s_right = deque(b)
    temp_s_left.appendleft(a)
    temp_s_right.append(a)
    temp_s_left = ''.join(temp_s_left)
    temp_s_right = ''.join(temp_s_right)
    for i in range(len(temp_s_left)):
        if temp_s_left[i] < temp_s_right[i]:
            return temp_s_left
        elif temp_s_right[i] < temp_s_left[i]:
            return temp_s_right
    return temp_s_right
    

if __name__ == "__main__":
    main()

