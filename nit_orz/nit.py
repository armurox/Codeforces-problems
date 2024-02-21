def main():
    t = int(input())
    for _ in range(t):
        n, z = map(int, input().split())
        nums = list(map(int, input().split()))
        possible_maxes = []
        for elem in nums:
            possible_maxes.append(max(z | elem, elem))
        print(max(possible_maxes))
        
    

if __name__ == "__main__":
    main()
