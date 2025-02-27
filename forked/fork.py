def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        x_k, y_k = map(int, input().split())
        x_q, y_q = map(int, input().split())
        k_set = {(x_k - a, y_k - b), (x_k - b, y_k - a), (x_k - b, y_k + a), (x_k + a, y_k - b), (x_k + b, y_k - a), (x_k - a, y_k + b),
             (x_k + a, y_k + b), (x_k + b, y_k + a)}
        q_set = {(x_q - a, y_q - b), (x_q - b, y_q - a), (x_q - b, y_q + a), (x_q + a, y_q - b), (x_q + b, y_q - a), (x_q - a, y_q + b),
             (x_q + a, y_q + b), (x_q + b, y_q + a)}
        print(len(k_set.intersection(q_set)))

    
if __name__ == "__main__":
    main()

