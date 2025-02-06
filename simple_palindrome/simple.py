def main():
    t = int(input())
    vowels = ['a', 'e', 'i', 'o', 'u']
    for _ in range(t):
        result = []
        n = int(input())
        for i in range(n):
            result.append(vowels[i % 5])
        result.sort()
        print(''.join(result))


if __name__ == "__main__":
    main()

