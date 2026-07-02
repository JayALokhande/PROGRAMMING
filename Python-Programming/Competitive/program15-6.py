from functools import reduce

Min = lambda No1 , No2 : No1 if No1 < No2 else No2

def main():
    Data = [1,42,333,44,56,67,7,80,89]

    print("Input Data is : ",Data)

    RData = reduce(Min,Data)
    print("Data Afer Reduce ",RData)

if __name__ == "__main__":
    main()