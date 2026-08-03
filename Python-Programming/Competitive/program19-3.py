from functools import reduce

Remove = lambda No :(No >= 70)and (No <= 90)
Increment = lambda No : No + 10
Product = lambda No1, No2 : No1 * No2

def main():
    Data = [4,34,36,76,68,24,89,23,86,90,45,70]
   
    FData = list(filter(Remove,Data))
    print("Data After Filter :",FData)

    MData = list(map (Increment,FData))
    print("Data Afer Map ",MData)

    RData = reduce (Product,MData)
    print("Data Afer Reduce ",RData)
    
if __name__ == "__main__":
    main()