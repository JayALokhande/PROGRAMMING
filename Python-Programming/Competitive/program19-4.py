from functools import reduce

ChkEven= lambda No : (No % 2 == 0)
Square = lambda No : No * No
Addition = lambda No1, No2 : No1 + No2

def main():
    Data = [5, 2, 3, 4, 3, 4, 1, 2, 8, 10]
   
    FData = list(filter(ChkEven,Data))
    print("Data After Filter :",FData)

    MData = list(map (Square,FData))
    print("Data Afer Map ",MData)

    RData = reduce (Addition,MData)
    print("Data Afer Reduce ",RData)
    
if __name__ == "__main__":
    main()