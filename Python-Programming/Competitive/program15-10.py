CheckEven = lambda No: (No % 2 == 0)

def main():
    Data = [15,23,30,45,50,60,75,80,95]

    print("Data Before Using Filter :", Data)

    FData1 = list(filter(CheckEven, Data))

    print("Even Numbers After Using Filter :", FData1)
    print("Count of Even Numbers :", len(FData1))

if __name__ == "__main__":
    main()