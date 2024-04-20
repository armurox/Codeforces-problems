from datetime import datetime
def main():
    t = int(input())
    for _ in range(t):
        print(datetime.strftime(datetime.strptime(input(), "%H:%M"), "%I:%M %p"))
    

if __name__ == "__main__":
    main()
