def main():
    n = int(input())
    s = input()
    is_prev_vowel = False
    indexes_to_remove = []
    for i in range(len(s)):
        if is_vowel(s[i]) and is_prev_vowel:
            indexes_to_remove.append(i)
        elif is_vowel(s[i]):
            is_prev_vowel = True
        else:
            is_prev_vowel = False
    removed = 0
    s_list = list(s)
    for i in indexes_to_remove:
        s_list.pop(i - removed)
        removed += 1
    print("".join(s_list))
    
    
def is_vowel(char):
    return char in {'a', 'e', 'i', 'o', 'u', 'y'}


if __name__ == "__main__":
    main()
