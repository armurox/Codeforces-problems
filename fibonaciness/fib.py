def main():
    n = int(input())
    for _ in range(n):
        a = list(map(int, input().split()))
        candidate_fibs = [a[0] + a[1], a[2] - a[1], a[3] - a[2]]
        max_fib = 0
        for fib in candidate_fibs:
            arr = a[:2] + [fib] + a[2:]
            curr_fib = curr_fibonacciness(arr)
            if  curr_fib > max_fib:
                max_fib = curr_fib
        print(max_fib)
            

def curr_fibonacciness(arr):
    num_fib = 0
    for i in range(3):
        if arr[i] + arr[i + 1] == arr[i + 2]:
            num_fib += 1
    return num_fib
    
    
if __name__ == "__main__":
    main()
