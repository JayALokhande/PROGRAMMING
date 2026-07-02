CheckDiv = lambda No : (No % 3 == 0)and(No % 5 == 0)

def main():
    Data = [15,23,30,45,50,60,75,80,95]

    print("Date Befor Using Filter :",Data)
    FData1 = list(filter(CheckDiv,Data))
    print("Even Number After Using Filter :",FData1)


if __name__ == "__main__":
    main()