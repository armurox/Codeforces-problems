class Shirt():
    def __init__(self, size):
        self.size = size
    
    def __gt__(self, other):
        return (('L' in self.size and 'L' not in other.size) or 
        (self.size.count('X') > other.size.count('X') and 'L' in self.size) or
        ('M' in self.size and 'S' in other.size) or
        (self.size.count('X') < other.size.count('X') and 'S' in other.size))
        
    def __eq__(self, other):
        return (self.size == other.size)

def main():
    cn = int(input())
    for _ in range(cn):
        a, b = map(Shirt, input().split())
        if a == b:
            print("=")
        elif a > b:
            print(">")
        else:
            print("<")
        
    
    
if __name__ == "__main__":
    main()
