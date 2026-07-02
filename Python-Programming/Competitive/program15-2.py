CheckEven = lambda No : (No % 2 == 0)

def main():
    Data = [1,2,3,4,5,6,7,8,9]

    print("Date Befor Using Filter :",Data)
    FData1 = list(filter(CheckEven,Data))
    print("Even Number After Using Filter :",FData1)


if __name__ == "__main__":
    main()