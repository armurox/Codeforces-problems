def main():
    case_num = int(input())
    for _ in range(case_num):
        tson_len, ten_len = input().split()
        tson = input().split()
        ten = input().split()
        tson = [int(i) for i in tson]
        ten = [int(i) for i in ten]
        while len(tson) != 0 and len(ten) != 0:
            max_tson = max(tson)
            max_ten = max(ten)
            if max_tson > max_ten:
                ten.remove(max_ten)
                tson[tson.index(max_tson)] = max_tson - max_ten
            elif max_tson == max_ten:
                tson.remove(max_tson)
                ten.remove(max_ten)
            else:
                tson.remove(max_tson)
                ten[ten.index(max_ten)] = max_ten - max_tson
                
        if len(tson) == 0 and len(ten) == 0:
            print("Draw")
        elif len(ten) > 0:
            print("Tenzing")
        else:
            print("Tsondu")
        
        
    
    
    
    
    
    
    
    
    
    
    
    
    
if __name__ == "__main__":
    main()