from functools import reduce

Addition = lambda No1 , No2 : No1 + No2

def main():
    Data = [1,2,3,4,5,6,7,8,9]

    print("Input Data is : ",Data)

    RData = reduce(Addition,Data)
    print("Data Afer Reduce ",RData)

if __name__ == "__main__":
    main()