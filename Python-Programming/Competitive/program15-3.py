CheckOdd = lambda No : (No % 2 != 0)

def main():
    Data = [1,2,3,4,5,6,7,8,9]
    
    print("Date Befor Using Filter :",Data)
    FData2 = list(filter(CheckOdd,Data))
    print("Odd Number  After Using Filter :",FData2)


if __name__ == "__main__":
    main()