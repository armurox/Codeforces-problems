from datetime import datetime
def string_to_datetime(date):
    a, b, c = map(int, date.split('-'))
    return datetime(a, b, c)

def main():
    while True:
        try:
            start_date = string_to_datetime(input('Enter Start Date: '))
            end_date = string_to_datetime(input('Enter End Date: '))
            assert end_date > start_date
            print('Number of days', end_date - start_date)
        except KeyboardInterrupt:
            break
                
    
if __name__ == "__main__":
    main()
